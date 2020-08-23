/**
 * C program for main driver body of the Shuffle guess what card game!!
 */

#include"/home/gladson/Desktop/Practice/Projects/Include/shuffle_guess_what.h"
int cash = 100;

int main()
{
	int bet;
	int ch;
	printf("**Welcome to the Virtual Casino**\n\n");
	printf("Total cash = $%d\n",cash);
	while(cash>0)
	{
		printf("What's your bet price? $");
		scanf("%d",&bet);
		if(bet==0||bet>cash)
		{
			printf("Invalid betting amount!!\n");
		}
		else
		{
			cash = shuffle_guess_what(bet,cash);
		}
		printf("\n\n*****Want to play more*****\n0/1?\n");
		scanf("%d",&ch);
		if(!ch)
		{
			break;
		}
	}
	return 0;
}
