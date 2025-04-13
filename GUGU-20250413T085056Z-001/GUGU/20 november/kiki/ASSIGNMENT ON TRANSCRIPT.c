#include <stdio.h>
#include<conio.h>
int main() 
{
    int mark, g, p, ge, m, i, total;
    char name[40];
    char years[6];
    float average;
    printf("\t\t\t\tUNIVERSTY OF KIGALI STUDENT TRANSCRIPT");
    printf("\nDepartment:"); 
    scanf("%s",&name);
    printf("\n                                                       Years:");
    scanf("%d",&years);
    printf("\nReg No.:");
    scanf("%d",&g);
    printf("\n                                                       Student Name:");
    scanf("%s",&name);
    printf("\nSUBJECT                                                MARKS");
    printf("\n.......................................................................");
    printf("\nProgramming in C                                       ");
    scanf("%d",&p);
    printf("\nIntroduction to ICT                                    ");
    scanf("%d",&i);
    printf("\nGeneral English                                        ");
    scanf("%d",&ge);
    printf("\nMathematics                                            ");
    scanf("%d",&m);
    printf(".........................................................................");
    total=p+i+ge+m;
    average=total/4;
    printf("\nTotal Marks:                                          %d",total);
    printf("\nAverage                                               %.1f",average);
    getch();
    return 0;
}
