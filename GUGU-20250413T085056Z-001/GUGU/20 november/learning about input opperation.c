#include<stdio.h>
#include<conio.h>
int main()
{
int a,b;
char letter;
float amount;
char name[20];
printf("what is your name?");
//scanf("%s",&name);
gets
printf("input the value of A and B:");
scanf("%d %d",&a,&b);
letter=getchar();
printf("what is your favorite letter?");
scanf("%c",&letter);
printf("enter the amount you have:");
scanf("%f",&amount);
printf("\ngood morning %s",name);
printf("\n%.1f is the total amount you have.",amount);
printf("\nYOUR FAVORITE LETTER IS %C",letter);
printf("\nA=%d and B=%d",a,b);
printf("\n%s favorite letter is %c and %d years old",name,letter,b);	
printf("\nlearning about input operation");
getch();
return 0;
}
