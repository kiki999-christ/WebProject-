#include <stdio.h>
#include <conio.h>
int main()
{
    int a,s,am,b,p=20000,w,d;
    printf("Enter the Pin:",a);
    scanf("%d",&a);
    getchar();
    if (a=12345)
    { 
    printf(" \nServices\n"); 
    printf("\n 1-> Check Balance \n2-> Withdraw \n3-> Deposit\n");
    printf("\nWhich Service Do You Want? \n Service:");
    scanf("%d",&s);
    getchar();
    switch (s)
    {
           case 1: printf("%d",p);
                   break;
           case 2: printf(" Enter the amount you want to Withdraw :");
                   scanf("%d",&w);
                   getchar();
                   b=p-w;
                   if (b>=2000)
                   {
                             printf("You Have Withdrawn %d",w);
                             break;
                             }
                             else
                             {
                                 printf(" You are not allowed to withdraw and your balance is below 2000");
                                 break;
                                 }
            case 3:printf("Enter The Amount You Want to Deposit:");
                   scanf("%d",&d);
                   getchar();
                   break ;             
                   }  }
    else 
                   { 
                       printf("Wrong Pin"); 
                   }   
                   
    getch();
    return 0;
}
