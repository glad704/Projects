/**
 * C program for main driver body of the Shuffle guess what card game!!
 */

#include<stdio.h>

int main()
{
	int bet;
	while(cash>0)
	{
		printf();
		scanf("%d",&bet);
		if(bet==0||bet>cash)
		{
			printf("Invalid betting amount!!\n");
		}
		else
		{
			shuffle_guess_what(bet);
		}
		printf("\n\n*****Want to play more*****");
		scanf("%s",ch);
		if(ch=='y'||ch=='Y'||ch=='yes'||ch=='YES'||ch=='Yes')
		{
			break;
		}
	}
	return 0;
}
