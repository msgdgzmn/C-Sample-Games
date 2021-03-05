#include <iostream>
#include <time.h>

using namespace std;


char square[10] = {'o','1','2','3','4','5','6','7','8','9'};
char letters = ('a','b','c','d','e','f','g','h','j','k','l','m','n','p','q','r','s','t','u','v','w','x','y','z');
int checkwin();
void board();
int main()
{

    
	int player = 1,i,choice;
	time_t start, end, diff;
	
  cout<<"Press Enter to begin!"<<endl;
  cin.ignore();
  start = time( NULL );
  
	char mark;
	do
	{
		board();
		player=(player%2)?1:2;

		cout << "Player " << player << ", enter a number:  ";
		cin >> choice;

 


		mark=(player == 1) ? 'X' : 'O';

		if (choice == 1 && square[1] == '1')

			square[1] = mark;
		else if (choice == 2 && square[2] == '2')

			square[2] = mark;
		else if (choice == 3 && square[3] == '3')

			square[3] = mark;
		else if (choice == 4 && square[4] == '4')

			square[4] = mark;
		else if (choice == 5 && square[5] == '5')

			square[5] = mark;
		else if (choice == 6 && square[6] == '6')

			square[6] = mark;
		else if (choice == 7 && square[7] == '7')

			square[7] = mark;
		else if (choice == 8 && square[8] == '8')

			square[8] = mark;
		else if (choice == 9 && square[9] == '9')

			square[9] = mark;
			
			
		
			
			else {

		cout<<"Choose only from numbers 1-9, if your number is already taken please choose another.";		
			{
			if (player != choice)
			return 0;}
			
          
		
			

			player--;
			cin.ignore();
			cin.get();
		}
		i=checkwin();

		player++;
	}while(i==-1);
	board();
	if(i==1)

		cout<<"==>\aPlayer "<<--player<<" win \n";
	else
		cout<<"==>\aGame draw";

  cin.ignore();
  end = time( NULL );
  diff = end - start;
  printf ( "Total time consumed: %ld", diff );
  
	cin.ignore();
	cin.get();
	


 
}

/*********************************************
	           The game status
	1== Game is over
	-1== Game is in Progress
	O== Game is over but has no result
**********************************************/

int checkwin()
{
	if (square[1] == square[2] && square[2] == square[3])

		return 1;
	else if (square[4] == square[5] && square[5] == square[6])

		return 1;
	else if (square[7] == square[8] && square[8] == square[9])

		return 1;
	else if (square[1] == square[4] && square[4] == square[7])

		return 1;
	else if (square[2] == square[5] && square[5] == square[8])

		return 1;
	else if (square[3] == square[6] && square[6] == square[9])

		return 1;
	else if (square[1] == square[5] && square[5] == square[9])

		return 1;
	else if (square[3] == square[5] && square[5] == square[7])

		return 1;
	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' 
                    && square[4] != '4' && square[5] != '5' && square[6] != '6' 
                  && square[7] != '7' && square[8] != '8' && square[9] != '9')

		return 0;
	
		return -1;
		
}


/*******************************************************************
                       The board of Tic Tac Toe
********************************************************************/


void board()
{
	system("cls");
	cout << "\n\n\tTic Tac Toe\n\n";
	cout<<"***********************************"<<endl;

	cout<<"**"<<"  ENTER NUMBERS FROM 1-9 ONLY! **"<<endl;

	cout<<"***********************************"<<endl<<endl<<endl;

	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;

	cout << "     |     |     " << endl;
	cout << "  " << square[1] << "  |  " << square[2] << "  |  " << square[3] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[4] << "  |  " << square[5] << "  |  " << square[6] << endl;

	cout << "_____|_____|_____" << endl;
	cout << "     |     |     " << endl;

	cout << "  " << square[7] << "  |  " << square[8] << "  |  " << square[9] << endl;

	cout << "     |     |     " << endl << endl;
	
}

