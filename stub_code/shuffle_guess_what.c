#include"/home/gladson/Desktop/Practice/Projects/Include/shuffle_guess_what.h"

int shuffle_guess_what(int bet,int cash)
{
	char C[3] = {'J','Q','K'};
	printf("Shuffling.......");
	srand(time(NULL));
	int i;
	for(i=0;i<5;i++)
	{
		int x = rand() % 3;
		int y = rand() % 3;
		int temp = C[x];
		C[x] = C[y];
		C[y] = temp;
	}
	int playerguess;
	printf("What's the position of queen - 1,2 or 3?");
	scanf("%d",&playerguess);
	if(C[playerguess-1]=='Q')
	{
		cash += 2*bet;
		printf("You win!! \nResult : \nTotal available cash : %d\n",cash);
	}
	else
	{
		cash -= bet;
		printf("You Loose!! \nResult : \nTotal available cash : %d\n",cash);
	}
	return cash;
}
