#include<stdio.h>
#include<conio.h>
int main()
{int Answer;
printf("                          QUESTION NUMBER ONE\n");
printf("                          --------------------");
	printf("\n\n       What is 23+7?");
	printf("\n\n          23+7=");
scanf("%d",&Answer);
if(Answer==30)
{
	printf("\n\n      %d is CORRECT ANSWER",Answer);
}
else
{
	printf("\n\n%d is WRONG ANSWER, TRY AGAIN",Answer);
}
printf("__________________________________________________");
	printf("\n\nThank You For Trying !!! \n\n ");
	getch();
	return 0;
}
