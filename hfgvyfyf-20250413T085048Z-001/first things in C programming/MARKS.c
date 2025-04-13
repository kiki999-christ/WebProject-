#include <stdio.h>
int main()
//HIRWA AXEL 2409000674
{
int year,english,maths,ict,programming;
float average,sum;
char department[10],registration[20],name[30],grade;
printf("NAME:");
scanf("%s",&name);
printf("what's your DEPARTMENT: ");
scanf("%s,10(department)",&department);
printf("YEAR:");
scanf("%d", &year);
printf("REG.No:  ");
scanf("%s",&registration);
printf("PROGRAMMING IN C:  ");

scanf("%d", &programming);
printf("ICT:  ");
scanf("%d",&ict);
printf("General English:  ");
scanf("%d",&english);
printf("Mathematics:  ");
scanf("%d",&maths);
(sum=maths+english+ict+programming);
average = sum/4;

        if(average>=75){grade='A';}
   else if(average>=60){grade='B';}
   else if(average>=50) {grade='D';}
   else{grade='F';}

  printf("\nUNIVERSITY OF KIGALI STUDENT TRANSCRIPT\n\n");
  printf("\nDepartment:%s\t\t",department);
  printf("Year:%d\n",year);
  printf("Reg No: %s \t",registration);
  printf("Student Name:%s\n",name);

  printf("\nSUBJECTS\t\t\tMARKS\n");
  printf("---------------------------------------------------\n");
  printf("Programming in C:\t\t %d\n",programming);
  printf("Introduction to ICT:\t\t %d\n",ict);
  printf("General English:\t\t %d\n",english);
  printf("Mathematics: \t\t\t%d\n",maths);
  printf("---------------------------------------------------\n");

  printf("Total Marks:\t\t\t%f\n",sum);
  printf("Average:\t\t\t%.1f\n",average);
  printf("Grade:\t\t\t\t%c\n",grade);
printf("---------------------------------------------------\n");

getchar();
    return 0;
}
