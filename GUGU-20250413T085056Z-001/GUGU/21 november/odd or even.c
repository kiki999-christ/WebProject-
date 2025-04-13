#include<stdio.h>
#include<conio.h>
int main()
{int a;
	printf("Input any number to determine if it is ODD or Even\n");
scanf("%d",&a);
if(a%2!=0)
{
	printf("%d is ODD \n",a);
}
else
{
	printf("%d is EVEN \n",a);
}
	printf("Learning if statement\n");
	getch();
	return 0;
}
