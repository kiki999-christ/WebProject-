#include<stdio.h>
#include<conio.h>
int main()
{int Answer,amount,Balance,Withdrawal;
printf("                          QUESTION NUMBER THREE\n");
printf("                          --------------------");
printf("\n\n       How Much Do You Have On Your Bank Account");
printf("\n\n         Balance:");
	scanf("%d",&Balance);
	getchar();
	printf("\n\n       How Much Do You Want To widraw ?");
	printf("\n\n             Amount:");
	scanf("%d",&amount);
	getchar();
	
    Withdrawal=Balance-amount;
if(Withdrawal>=2000)
{
	printf("\n\n      You Have Successfully Withdrawn  %d From Your Back Account",amount);
}
else
{
	printf("\n\n        Your Withdrawal Failed Because The Amount You Want to Withraw  ",amount);
	printf(" \n                    Doesn't Meet The Minimum Withdrawal.'");
}
printf("\n__________________________________________________");
	printf("\n\nThank You For Trying, Continue To Work With Us !!! \n\n ");
	getch();
	return 0;
}
