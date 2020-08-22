/**
 * C program for main driver body of the Shuffle guess what card game!!
 */

#include"../Projects/Include/shuffle_guess_what.h"

int main()
{
	int bet;
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
			shuffle_guess_what(bet);
		}
		printf("\n\n*****Want to play more*****\n\n");
		scanf("%s",ch);
		if(ch=='y'||ch=='Y'||ch=='yes'||ch=='YES'||ch=='Yes')
		{
			break;
		}
	}
	return 0;
}
