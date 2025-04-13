
#include<stdio.h>
#include<conio.h>
int main()
{float r;
 float A;
 int a,b,empty_room,bread,milk,total,q;
 const float  Pi=3.14;
 printf("Radius:");
 scanf("%f",&r);
 getchar();
 printf("Pi:%2f",Pi);
 A= (Pi*r*r);
 printf("\n\nA= (Pi*r*r)\n");
 printf("--------------------------------------\n");
 printf("\n\nArea:%.2f",A);
 printf("\n-------------");
 printf("\n The Second question\n");
 printf("a:");
 scanf("%d",&a);
 getchar();
 printf("b:");
 scanf("%d",&b);
 getchar();
 printf("Before swapping a=%d and b=%d",a,b);
 empty_room=a;
 a=b;
 b=empty_room;
 printf("\n\nafter swapping a=%d and b=%d",a,b);
 print("Cost of Bread:");
 scanf("%d",&bread);
 getchar();
 print("Cost of Milk:");
 scanf("%d",&milk);
 getchar();
 printf("Cost of Sugar Per 1Kg:");
 scanf("%d",&cost_of_sugar_per_1kg);
 getchar();
 printf("Quantity of sugar in kilograms:");
 scanf("%d",&q);
 getchar();
 printf("Receipt");
 print("Cost of Bread:");
 print("Cost of Milk:");
 cost_of_sugar=cost_sugar_per_1kg*q;
 printf("Cost of Sugar");
 total=cost_p
 print("Total Bills:%d",total);
 
getch();
return 0;	
}
