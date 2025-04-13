#include <stdio.h>
#include <conio.h>
int main() {
    int a,c=100,q,t;
    float ftc;
    float dp=0.9;
    char op;
    printf("                    Here I am  ");
    printf("\nCost per unit is %d",c);
    printf("\nQuantity needed:");
    scanf("%d",&q);
    getchar();
    t=c*q;
    ftc=t*dp;
    printf("\nTotal cost = %d\n",t);
    if (t>1000)
{
                printf("\n Congratulation you have given 10 percent Discount\n");
                printf("\n The amount you have to pay is %.0f\n",ftc);
} 
 else
{
       printf("\nThe amount you have to pay is %d\n",t);
}
printf("\n--------- Receipt----------\n");
printf("\nQuantity:%d\n",q);
if (t>1000)
{
printf("\nTotal cost:%.0f\n",ftc);
}
else
{
    printf("\nTotal cost:%d\n",t);
}
printf(" \n\n------------Thank You !!!--------------\n");
    getch();
    return 0;
}
