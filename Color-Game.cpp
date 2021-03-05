#include<iostream>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include <stdio.h>  
#include <Windows.h>
#include<string>
using namespace std;


void call();
void red();
void blue();
void green();
void yellow();
void pink();
void white();
void call();
int main()
{
string colorName[] = {"red", "blue", "green", "yellow", "pink", "white"};
string color;


	std::cout<<"\tWelcome to the game of chance ! A Color Game :) Let's Start ! \n";
	Sleep(1000);
	
	xn:
	std::cout<<"\nEnter the color you desire(Red, Blue, Green, Yellow, Pink, White): ";
	std::cin>>color;
	
	std::cout<<"\nEnter the bet you desire: ";
	
	char bet;
	int b;
	
	cout<<"choose a bet:\n";
	cout<<"Note: The letter should be capital\n";
	cout<<"You only have 5000!\n";
	cout<<"A=1000\n";
	cout<<"B=2000\n";
	cout<<"C=3000\n";
	cout<<"D=4000\n";
	cout<<"E=5000\n";
	cout<<"choose a bet:\n";
	
	cin>>bet;
	
	if ((bet=='A')||(bet=='a'))
       
	   b=1000;
       
    else if ((bet=='B')||(bet=='b'))
       
	   b=2000;
       
    else if ((bet=='C')||(bet=='c'))
       
	   b=3000;
       
    else if ((bet=='D')||(bet=='d'))
       
	   b=4000;
       
    else if ((bet=='E')||(bet=='e'))
       
	   b=5000;
       
	else
	{
	cout<<"Invalid";
	exit(0);
}
	//std::cin>>bet;
    std::cout<<"\n\n\t\tLoading. . . . . . .\n ";
    Sleep(3000);
    std::cout<<"\n\n\t\tPress R to roll the dice \n"; 
    char ch;
    ch = getch();
    xm:
    if ((ch=='r')||(ch=='R')){ 
    call();  }
    else
    exit (0);
    
    
    
    srand (time(NULL));

        int n;
        n= rand();
        n = 1 + n % 6;
        string col;
        switch (n)
        {
         case 1:
              
              col="red";
              break;
         case 2:
              
              col="blue";
              break;
         case 3:
              
              col="green";
              break;
         case 4:
              
              col="yellow";
              break;
         case 5:
              
              col="pink";
              break;
         case 6:
              
              col="white";
              break;
         default:
                 std::cout<<"NOCOLOR";

        }       
    
    
	if (color==col)
	std::cout<<"\t\tYou win! Your" << " "<< b <<" will be back to you!\n";
	else
	std::cout<<"\t   You lose! Better luck next time!\n";	    
	std::cout<<"\n\nPress Enter to play again!\n";
    ch = getch();
    goto xn;
    goto xm;
    getch();
    system("pause");
}


    void call()
    {
        srand (time(NULL));

        int n;
        n= rand();
        n = 1 + n % 6;
        string col;

        switch (n)
        {
         case 1:
              red();
              col="red";
              break;
         case 2:
              blue();
              col="blue";
              break;
         case 3:
              green();
              col="green";
              break;
         case 4:
              yellow();
              col="yellow";
              break;
         case 5:
              pink();
              col="pink";
              break;
         case 6:
              white();
              col="white";
              break;
         default:
                 std::cout<<"NOCOLOR";

        }       
        
    }  


        void red()
        {
        std::cout << "\t\t\t ------\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t| RED  |\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t ------\n";
        system("COLOR 4C");
        }
        void blue()
        {
        std::cout << "\t\t\t ------\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t| BLUE |\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t ------\n";
        system("COLOR 9C");
        }
        void green()
        {
        std::cout << "\t\t\t ------\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t| GREEN|\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t ------\n";
        system("COLOR AC");
        }
        void yellow()
        {
        std::cout << "\t\t\t ------\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t|YELLOW|\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t ------\n";
        system("COLOR EC");
        }
        void pink()
        {
        std::cout << "\t\t\t ------\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t| PINK |\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t ------\n";
        system("COLOR DC");
        }
        void white()
        {
        std::cout << "\t\t\t ------\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t| WHITE|\n";
        std::cout << "\t\t\t|      |\n";
        std::cout << "\t\t\t ------\n";
        system("COLOR FC");
        }
