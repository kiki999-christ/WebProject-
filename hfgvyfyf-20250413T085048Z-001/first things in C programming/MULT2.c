#include <stdio.h>
int main()
{
	int i,n,j,result;
	printf("enter n0:");
	scanf("%d",&n);
	for(i=1,j=1;j<=10;i++,j++)
	{ 
	result=i*j;
	
	printf("%d*%d=%d\n",i,j,result);
	}
	
	printf("\nlearning the for-looping satement\n");
	
	return 0;
}
