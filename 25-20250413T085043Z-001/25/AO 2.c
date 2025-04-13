#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int a,b,result;
	char op;
	printf("Enter the first value to compute:");
	scanf("%d",&a);
	printf("\nInput an operator: +, -, *, / :");
	scanf(" %c",&op);
	printf("Enter the second value to compute:");
	scanf("%d",&b);
	switch(op)
	{ 
	case '+':result=a+b;
	       break;
	case '-':printf("%d-%d=%d",a,b,a-b);
	       break;
	default:printf("Invalid operator.");      
	}
	printf("%d %c %d =%d",a,op,b,result);
	printf("\nLearning if statements\n");
	getch();
	return 0;
}
