#include <stdio.h>
int main()
{
	int r,a,b,c;
	float pi=3.14,area;
	printf("mention any two No:\n");
	printf("A:");
	scanf("%d",&a);
	printf("\nB:");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("\n swapping A=%d B=%d",a,b);
	
	printf("\nAREA CIRCLE::");
	
	printf("\nradius: ");
	scanf("%d",&r);
	
	area=r*r*pi;
	printf("\narea=%f",area);
	
	
	
return 0;	
}