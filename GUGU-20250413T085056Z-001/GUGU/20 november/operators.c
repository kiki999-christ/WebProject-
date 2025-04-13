#include<stdio.h>
#include<conio.h>
int main()
{int a=10,b=20;
char letter='K';
char fullname[12]="john adams";
float amount=23.43;
int sum=a+b;
printf("DISPLAYING DATA \n");
printf("my favorit letter is %C",letter);
printf("\nmy name is %s",fullname);
printf("\the value stored in variable A is %d",a);
printf("\n%s is my full name",fullname);
printf("\nA=%d AND B=%d and my name is %s",a,b,fullname);
printf("\nthe sum is %d + %d = %d,",a,b,a+b);
printf("\nthe total amount is %.2f",amount);
getch();
return 0;
}
