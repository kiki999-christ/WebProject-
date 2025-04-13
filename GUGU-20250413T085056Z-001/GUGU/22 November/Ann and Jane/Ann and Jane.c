#include<stdio.h>
#include<conio.h>
int main()
{int Answer,age_ann,age_jane;
printf("                          QUESTION NUMBER FOUR\n");
printf("                          --------------------");
	printf("\n\n       Between Anne and Jane, Who Is Elder?");
	printf("\n\n          Age Of Ann :");
	scanf("%d",&age_ann);
	getchar();
	printf("\n\n           Age Of Jane:");
	scanf("%d",&age_jane);
	getchar();
if(age_ann<age_jane)
{
	printf("\n\n      Jane Is Older Than Her Sibling Ann ",Answer);
}
else if (age_ann<age_jane)
{
	 printf("\n\n     Ann Is Elder Than Her Sibling Jane ",Answer);
}
else
{
	printf("\n\n      Ann and Jane are twins");
}
printf("\n__________________________________________________");
	printf("\n\nThank You For Using Your Comparison !!! \n\n ");
	getch();
	return 0;
}
