    #include<stdio.h>
	#include<conio.h>
	#include<stdlib.h>


	int display(long int[], int[]);

	int main()



    	{ long int amount[25]={1,5,20,25,50,100,200,300,400,500,1000,2000,3000,4000,5000,10000,25000,50000,100000,200000,300000,400000,500000,1000000,2000000};

        long int offer;
        int isOpen[24];
	    int mainbc, bcopen, bcleft, tochoose;
	    long int i,j,k,m, deal,roundnum,sum,temp,youwon,number;
	    char bankeryn, name[50];

	    void ClearScreen();
        void randomize();

printf("OOOOOOOO     OOOOOOO   OOO    OO  OOOOOOOO   \n");
printf("OO    OOO   OO     OO  OOOO   OO  OO    OOO   \n");
printf("OO     OOO  OO     OO  OO OO  OO  OO     OOO  \n");
printf("OO     OOO  OO     OO  OO  OO OO  OO     OOO  \n");
printf("OO    OOO   OO     OO  OO   OOOO  OO    OOO  \n");
printf("OOOOOOO      OOOOOOO   OO    OOO  OOOOOOOO   \n");






 	   for(i=0;i<=24;i++)
	    {   isOpen[i]=0;
	    }

	    for(i=24;i>0;--i)
	    {       j=rand()%(24-1)+1;
	        temp=amount[j];
	        amount[j]=amount[i];
	        amount[i]=temp;
}

printf("\n\nLet's play deal or no deal! Are you ready? \n\n");
printf("Enter player name: ");
scanf("%s",&name);


	    printf("\nWelcome,  %s\
!", name);
	    printf(" Choose your briefcase [ 1 ] to [ 24 ] : ");
	    scanf("%d",&mainbc);
	    printf("\n%s, You chose briefcase number %d \n",name,mainbc);
	    isOpen[mainbc]=1;

	    offer=0;
	    roundnum=1;
	    deal=0;
	    tochoose=7;
	    bcleft=24-2;
	    youwon=0;
	    number=7;


	    while(bcleft!=0 && deal == 0)
	    {   printf("\n\nLet's Play Round: %d",roundnum++);
	        for(i=0;i<tochoose;)
	        {   printf("\n\nOpen Briefcase: ");
	            scanf("%d",&bcopen);
	            if(bcopen!=mainbc && bcopen<=24)
	            {   if(isOpen[bcopen]==0)
	                    {   printf("\nYou chose briefcase number %d: Php %d%10 ", bcopen,amount[bcopen]);
	                        isOpen[bcopen]=1;
	                        display(amount,isOpen);
	                        i++;
	                    }

	                    else
	                    {
	                    printf("\nAlready Opened!\n");
	                    }
	            }
	            else
	                {   printf("\nInvalid choice!");
	                }

	        }


	        bcleft-=tochoose;
	        --tochoose;

	       //bankers offer//
	        sum=0;
	       for(i=1,j=0;i<=24;i++)
	        {   if(isOpen[i]==0)
	            sum+=amount[i];
	            j++;
	        }
	        offer=sum/j;
 do{
	        if(roundnum<=4)
	        {   printf("\n\nBankers Offer: %d%5",offer);
	            printf("\nIs it a Deal or No Deal?[y/n]: ");
	            scanf(" %c",&bankeryn);
	            if(bankeryn=='y' || bankeryn=='Y')
	            {   deal=1;
	                youwon=offer;
	                break;

	            }
	            else if (bankeryn=='n' || bankeryn=='N')
                  {
                      deal=0;
                     youwon=mainbc;
                  }
	            else
	            {       printf("\ninvalid Input!");

	            }
	        }
 }
while(bankeryn!='n');
long int z;
	        if(roundnum==5)
	        {   //m=display(amount,isOpen);
	            printf("\n Switch or Open your briefcase number [ %d ] [S/O]: ",mainbc);
	            scanf(" %c",&bankeryn);
	            if (bankeryn=='S' || bankeryn=='s')
                {

	                    {   printf("\nYou Switch briefcase number", bcleft,amount[bcleft]);
	                        isOpen[bcopen]=1;
	                        display(amount,isOpen);
	                        i++;
	                        printf("\n\nBankers Offer: %d%5",offer);
	                    }
                }
                else if (bankeryn=='O' || bankeryn=='o')
                {

                    deal=0;
	                youwon=mainbc;
                    printf("\n\nBankers Offer: %d%5",offer);

                }

	            printf("\nIs it a deal or no deal? [y/n]: ",mainbc);
	            scanf(" %c",&bankeryn);
	            if(bankeryn=='Y' || bankeryn=='y')
	            {   deal=1;
                    youwon=offer;
	                break;
	            }
	            else
            {       deal=0;
                    youwon=bcleft;
	               break;
            }
	        }
	            getch();

	        }


	            if(deal==0)
	            {   printf("\n You won %d%10",amount[mainbc]);
	            }
	            else
	            {   printf("\n Congratulations! You won %d%5", offer);
	            }
	                printf("\n\n\n Thank you for Playing Deal or No Deal!");
	                printf("\n\n\nPress any key to continue...");
	                getch();
	                return 0;
	}

	int display(long int a[24],int isOpen[24])
	{   int h;
	    printf("\n\n");
	    for(h=1;h<=24;h++)
	    {   if(isOpen[h]==0)
            {printf("\t[ %d ]",h);
        }
	        if(h%4==0)
	            printf("\n");
        }
	    return h;
	}

