#include <stdio.h>
#include <stdlib.h>

int main()
{
    int marks;
    int fail=5;
    int sum;
    printf("Enter marks: ");
    scanf("%d",&marks);

    if(marks>44){
    printf("Your have:%dmarks",marks);
    printf("\nYou Passed");
    }
    else {
        printf("You Failed");
    }
    sum=marks+fail;
    printf("\nWe added 5marks to your marks\nYou have Now:%dmarks",sum);
    return 0;
}
