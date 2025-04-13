#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int a,b;
	char op;
	printf("Which arithmetic operation do you want to perform?\n");
	printf("Addition(+)  \nSubstraction(-)   \nMultiplication(*) \nDivision(/) \n");
	scanf("%c",&op);
	printf("Enter the two values to complete");
	scanf("%d %d",&a,&b);

	switch(op)
	{ 
	case '+':printf("%d+%d=%d",a,b,a+b);
	       break;
	case '-':printf("%d-%d=%d",a,b,a-b);
	       break;
	case '*':printf("%d*%d=%d",a,b,a*b);
	       break;
	case '/':printf("%d/%d=%d",a,b,a/b);
	       break;
	default:printf("Invalid operator.");      
	}
	printf("\nLearning if statements\n");
	getch();
	return 0;
}
