#include<stdio.h>
#include<conio.h>
int main()
{int Answer,x,y;
printf("                          QUESTION NUMBER TWO\n");
printf("                          --------------------");
	printf("\n\n       What is x+y?");
	printf("\n\n       value of x:");
	scanf("%d",&x);
	getchar();
	printf("\n\n       value of y:");
	scanf("%d",&y);
	getchar();
	printf("\n\n          x+y=");
    scanf("%d",&Answer);
if(Answer==x+y)
{
	printf("\n\n      %d is CORRECT ANSWER",Answer);
}
else
{
	printf("\n\n%d is WRONG ANSWER, TRY AGAIN",Answer);
}
printf("\n__________________________________________________");
	printf("\n\nThank You For Trying !!! \n\n ");
	getch();
	return 0;
}
