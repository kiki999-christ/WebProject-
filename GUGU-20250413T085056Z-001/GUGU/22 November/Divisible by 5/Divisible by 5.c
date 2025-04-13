#include<stdio.h>
#include<conio.h>
int main()
{int a;
	printf("Input any number to determine if it is ODD or Even\n");
scanf("%d",&a);
if(a%5==0)
{
	printf("%d is Divisible by 5 \n",a);
}
else
{
	printf("%d is not Divisible by 5 \n",a);
}
	printf("Learning if statement\n");
	getch();
	return 0;
}
