#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <windows.h>
#include <MMsystem.h>
using namespace std;
HANDLE SetColor(
HANDLE console,
	int fg=FOREGROUND_BLUE | FOREGROUND_GREEN | FOREGROUND_RED | FOREGROUND_INTENSITY,
	int bg=0)
	{
	if (console==NULL)
	console=GetStdHandle(STD_OUTPUT_HANDLE);
	
	SetConsoleTextAttribute(console,fg | bg);
	
	return console;
}

int main ()
{
srand(time(0));
string ch;
do{
	cout<<" ----Welcome to Guessing a Number with Throwing a Dice Game---- "<<endl;
cout<<"1.Single Player\n";
cout<<"2.Multiplayer\n";
cout<<"3.How to Play\n";
cout<<"0.Quit\n";
cout<<"Choose number from the given choices above:";
cin>>ch;

if (ch=="1"){
int rndm,guess,tries=10;
rndm=rand()%100+1;
HANDLE console=SetColor(NULL, FOREGROUND_GREEN, FOREGROUND_INTENSITY);
do{
cout<<"\nYou have "<<tries<<" tries left\n";
cout<<"Enter Your Guess Number Between 1 to 100\n";
cin>>guess;
if (guess>rndm){
tries--;
cout<<"Lower Number than "<<guess<<endl;
}
else if (guess<rndm){
tries--;
cout<<"Higher Number than "<<guess<<endl;
}

}
while (tries!=0&&guess!=rndm);
if (tries==0){
cout<<"\nYou have "<<tries<<" tries\n";
cout<<"Game Over\n\n";
}
else if (guess==rndm){
cout<<"\nCongratulations, You Got It!!\n";
cout<<"The correct answer is "<<rndm<<"!!"<<endl;
cout<<"You got the correct answer in "<<tries<<" tries left!!!\n\n";
}

}




else if (ch=="2"){
string p1,p2,th,roll;
int random,one,two,r1,r2;
th="throw";
random=rand()%100+1;

cout<<"\nInput Player One Name?\n";
cin>>p1;
cout<<"Input Player Two Name?\n";
cin>>p2;
do{
r1=rand()%6+1;
r2=rand()%6+1;
HANDLE Console=SetColor(NULL, FOREGROUND_BLUE, FOREGROUND_INTENSITY);
do{
cout<<"Type ONLY lowercase 'throw':";
cin>>roll;
if (roll!=th){
cout<<"Invalid Input!!\n\n";
}
}
while (roll!=th);
cout<<endl<<endl<<p1<<" dice:\n";
switch (r1){
case 1:
cout<<endl;
cout<<"*****************\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"*       0       *\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"*****************\n";break;
case 2:
cout<<endl;
cout<<"*****************\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"*      0  0     *\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"*****************\n";break;
case 3:
cout<<endl;
cout<<"*****************\n";
cout<<"* 0             *\n";
cout<<"*               *\n";
cout<<"*       0       *\n";
cout<<"*               *\n";
cout<<"*             0 *\n";
cout<<"*****************\n";break;
case 4:
cout<<endl;
cout<<"*****************\n";
cout<<"* 0           0 *\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"* 0           0 *\n";
cout<<"*****************\n";break;
case 5:
cout<<endl;
cout<<"*****************\n";
cout<<"* 0           0 *\n";
cout<<"*               *\n";
cout<<"*       0       *\n";
cout<<"*               *\n";
cout<<"* 0           0 *\n";
cout<<"*****************\n";break;
case 6:
cout<<endl;
cout<<"*****************\n";
cout<<"* 0           0 *\n";
cout<<"*               *\n";
cout<<"* 0           0 *\n";
cout<<"*               *\n";
cout<<"* 0           0 *\n";
cout<<"*****************\n";break;
}
cout<<endl<<p2<<" dice:\n";
switch (r2){
case 1:
cout<<endl;
cout<<"*****************\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"*       0       *\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"*****************\n";break;
case 2:
cout<<endl;
cout<<"*****************\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"*      0  0     *\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"*****************\n";break;
case 3:
cout<<endl;
cout<<"*****************\n";
cout<<"* 0             *\n";
cout<<"*               *\n";
cout<<"*       0       *\n";
cout<<"*               *\n";
cout<<"*             0 *\n";
cout<<"*****************\n";break;
case 4:
cout<<endl;
cout<<"*****************\n";
cout<<"* 0           0 *\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"*               *\n";
cout<<"* 0           0 *\n";
cout<<"*****************\n";break;
case 5:
cout<<endl;
cout<<"*****************\n";
cout<<"* 0           0 *\n";
cout<<"*               *\n";
cout<<"*       0       *\n";
cout<<"*               *\n";
cout<<"* 0           0 *\n";
cout<<"*****************\n";break;
case 6:
cout<<endl;
cout<<"*****************\n";
cout<<"* 0           0 *\n";
cout<<"*               *\n";
cout<<"* 0           0 *\n";
cout<<"*               *\n";
cout<<"* 0           0 *\n";
cout<<"*****************\n";break;
}
if (r1>r2){
cout<<"It's "<<p1<<" turn!!Enter your guess between 1 to 100\n";
cout<<"Enter your guess number:";
cin>>one;
if (one>random)
cout<<"\nLower number than "<<one<<endl;
if (one<random)
cout<<"\nHigher number than "<<one<<endl;
}
if (r2>r1){
cout<<"It's "<<p2<<" turn!!Enter your guess between 1 to 100\n";
cout<<"Enter your guess number:";
cin>>two;
if (two>random)
cout<<"\nLower number than "<<two<<endl;
if (two<random)
cout<<"\nHigher number than "<<two<<endl;
}
}
while (one!=random&&two!=random);
if (one==random){
cout<<endl<<p1<<" Win!!!\n";
cout<<p1<<" got the correct answer! Congratulations!\n\n";
}
if (two==random){
cout<<endl<<p2<<" Win!!!\n";
cout<<p2<<" got the correct answer! Congratulations!\n\n";
}
}

else if (ch=="3"){
cout<<"\nHow To Play\n";
cout<<"Single Player:You will guess a number between 1 to 100 with only 10 tries.\n\n";
cout<<"Multiplayer:The two player will throw a dice who got a higher number will be the first one to guess a number.\n\n";
cout<<"REMEMBER: Follow the Rules and Enjoy playing! :)\n";
}
else if (ch=="0"){
	cout<<"Thank you for playing!\n";
}
else{
cout<<"Invalid!!\n\n";
}
}
while (ch!="0");
system("pause");
}

