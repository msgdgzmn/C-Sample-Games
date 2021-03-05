#include<iostream>
using namespace std;

class field{
private:
	int stones;
public:
	field(){
		stones= 6;
	}
	~field(){};
	int get_stones(){
		return stones;
	}
	void add_stones(int s){
		stones += s;
	}
	void sub_stones(int s){
		stones -= s;
	}
	bool empty(){
		return (stones == 0);
	}
};

#include<iostream>
#include<string>
#include<vector>
using namespace std;

class player{
private:
	int kalah;
	int caught_field;	
	int playernumber;
	static int number;
	bool turn;
	string namen;
	vector<field> playerfield;
public:
	player(string n){
		kalah = 0;
		caught_field = -1;
		playernumber = ++number;
		turn = true;
		namen = n;
		for (int i=0; i<6; i++)	//create 6 fields
			playerfield.push_back(field());
	}
	~player(){};
	int move (int fieldnumber){

		turn = false;
		caught_field = -1;
		int tmp=playerfield[fieldnumber].get_stones();

		if (playerfield[fieldnumber].get_stones() + fieldnumber >= playerfield.size()){
			if (playerfield[fieldnumber].get_stones() + fieldnumber == playerfield.size())
				turn = true; //last moved stone goes to players pot results in an extra turn
			playerfield[fieldnumber].sub_stones(1);
			add_kalah(1);
		}
		
		int stones = playerfield[fieldnumber].get_stones();
		for (int i=fieldnumber+1;i<playerfield.size() && stones != 0; i++,stones --){
			if (tmp + fieldnumber < playerfield.size() && stones == 1 && playerfield[i].empty()){
				playerfield[fieldnumber].sub_stones(1); //last moved stone goes to an own empty field
				catch_opponent_field(i);
				add_kalah(1);
				stones--;
				break;
				}
			playerfield[i].add_stones(1);
			playerfield[fieldnumber].sub_stones(1);
		}

		if (stones != 0){
			playerfield[fieldnumber].sub_stones(stones);
			return stones;
		}
		return 0;
	}
	int move_to_opponent(int stones){
		for (int i=0; i<playerfield.size()&& stones != 0; i++,stones--){
			playerfield[i].add_stones(1);
		}
		return stones;
	}
	void catch_opponent_field (int fieldnumber){ //calculate opposite-field. Example: own field 0: (0-5) * -1 
		caught_field = (fieldnumber - 5) * (-1); //opposite-field = 5 //
	}
	int get_caught_field(){
		return caught_field;
	}
	int get_opponent_stones(int fieldnumber){	//return caught stones
		int stones = playerfield[fieldnumber].get_stones();
		playerfield[fieldnumber].sub_stones(stones);
		return stones;
	}
	bool playerturn(){
		return turn;
	}
	void set_turn(bool b){
		turn = b;
	}
	bool field_empty(int fieldnumber){
		return playerfield[fieldnumber].empty();
	}
	bool emtpy (){ //return true if all fields of a specific player are empty
		int sum=0;
		for (int i=0; i<6; i++)
			sum += playerfield[i].get_stones();
		return (sum==0);
	}
	void add_kalah(int s){
		kalah += s;
	}
	int get_kalah(){
		return kalah;
	}
	string get_name(){
		return namen;
	}
	void print_overview(){
		
			cout << "\t\t";
		if (playernumber == 1)
			for (int i=5; i>=0; i--)
				cout << "    " << "[ " << playerfield[i].get_stones() <<" ]";
				
		else
			for (int i=0; i<6; i++)
				cout << "    " << "[ " << playerfield[i].get_stones() <<" ]";
		cout << endl;
		
		cout <<  " " <<namen  << endl;
		cout << " Points: " << kalah;
	
	}
};
int player::number = 0;

#include<iostream>


using namespace std;

void clear_main(){
	

	system("cls");
}

int main(){
	cout << endl <<endl;
	vector<player>plist;
	plist.push_back(player("PLAYER 1")); 
	
	plist.push_back(player("PLAYER 2"));
	int pp=0;								// = playerpointer
		
	cout << "       \t\t       *^^* WELCOME TO SUNGKA v2.0 *^^* " << endl<<endl;
	
	do{
		while (plist[pp].playerturn()){
			int choice;
			cout <<  endl << endl;
			
			cout << "\t\t      5        4        3        2        1        0" << endl;
			cout << "     \t\t  <------------------------------------------------------" << endl << endl;
		    plist[0].print_overview(); cout << endl <<endl;
		    
			plist[1].print_overview();
		
			cout << "        ------------------------------------------------------> " << endl;
			cout << "\t\t      0        1        2        3        4        5" << endl << endl <<endl;
			cout << "\t\t\t\t" <<plist[pp].get_name() << "'S turn" << endl << endl << endl;
			cout << "Please insert the field, from where you would like to move the stones" << endl;
			cout << "Number between 0 to 5: " << endl;
			cin >> choice;
			if (choice > 5 || plist[pp].field_empty(choice)){
				cout <<  "You picked an empty or an invalid field, please pick a valid field!" << endl;
				system("pause");
				clear_main();
				continue;
			}
			else{
				int return_stones=0;
				int move_to_opponent = plist[pp].move(choice);			//players move//
				if (move_to_opponent != 0)								//if fieldnumber+number of stones > own fields+1
					return_stones = plist[(pp+1)%2].move_to_opponent(move_to_opponent);//the remaining stones go to opponent-field//
				if (return_stones != 0){									//if remaining stones > opponent field
					return_stones = plist[(pp)].move_to_opponent(return_stones); //stones come back to own fields
				}
				if (plist[pp].get_caught_field()!=-1){							
					int fieldnumber = plist[pp].get_caught_field();		//if last stone goes to an own empty field
					int stones = plist[(pp+1)%2].get_opponent_stones(fieldnumber); //player get the opposite-placed stones to his pot
					plist[pp].add_kalah(stones);//also as his last moved stone//
				}
				clear_main();
			}
		}
		pp = (pp+1)%2;		//next players turn
		plist[pp].set_turn(true);
		
	}while (plist[0].get_kalah()<37 && plist[1].get_kalah()<37 && !plist[0].emtpy() && !plist[1].emtpy());
	//game is over when one player got more then 36 stones (total stones = 72) or all his fields are empty
	cout << "\t\t      5        4        3        2        1        0" << endl;
			cout << "     \t\t  <------------------------------------------------------" << endl << endl;
		    plist[0].print_overview(); cout << endl <<endl;
		    
			plist[1].print_overview();
		
			cout << "        ------------------------------------------------------> " << endl;
			cout << "\t\t      0        1        2        3        4        5" << endl << endl <<endl;
	if (plist[0].get_kalah() > plist[1].get_kalah())
		cout << plist[0].get_name() << " Wins! "<< endl;
	else if (plist[0].get_kalah() == plist[1].get_kalah())
		cout << " Game ends in a draw. "<< endl;
	else cout << plist[1].get_name() << " Wins! "<< endl; 
}

