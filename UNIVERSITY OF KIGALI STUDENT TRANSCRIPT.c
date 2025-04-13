#include<stdio.h>
#include<conio.h>
int main()
{
	int English,Mathematics,Programming_in_C,Introduction_to_ICT;
	int Summation;
	float Average;
	char Student_Name[40]; 
	char Department[5];
	char grade;
	int Reg_No,Year;
	printf("\n                Student Credentials\n");
	printf("Department:");
	scanf("%s",&Department);
	getchar();
	printf("Year:");
	scanf("%d",&Year);
	getchar();
	printf("Names:");
	gets(Student_Name);
	printf("Reg No:");
	scanf("%d",&Reg_No);
	getchar();
	printf("\n\n             Enter The Marks For Each Subject\n\n");
	printf("Programming in C:");
	scanf("%d",&Programming_in_C);
	getchar();
	printf("Introduction to ICT:");
	scanf("%d",&Introduction_to_ICT);
	getchar();
	printf("General English:");
	scanf("%d",&English);
	getchar();
	printf("Mathematics:");
	scanf("%d",&Mathematics);
	getchar();
	Summation=English+Mathematics+Introduction_to_ICT+Programming_in_C;
	printf("Total Marks:%d",Summation);
	Average=Summation/4;
	printf("\nAverage:%.1f",Average); 
	printf("\n\n          UNIVERSITY OF KIGALI STUDENT TRANSCRIPT");
	printf("\n\nDepartment:%s            YEAR:%d",Department,Year);
	printf("\n\nReg No.:%d        Student Name:%s",Reg_No,Student_Name);
	printf("\n\nSUBJECT                         MARKS\n\n");
	printf("---------------------------------------------------------\n");
	printf("\n\nProgramming in C:               %d",Programming_in_C);
	printf("\n\nIntroduction to ICT:            %d",Introduction_to_ICT);
	printf("\n\nGeneral English:                %d",English);
	printf("\n\nMathematics:                    %d\n\n",Mathematics);

	printf("-----------------------------------------------------------\n");
	printf("\nTotal Marks:                    %d",Summation);
	printf("\n\nAverage:                        %.1f",Average);
	if (Average>=75)
	{
	printf("\n\nGrade                           A\n");

	}
	else if(Average>=65)
	{
	printf("\n\nGrade                           B\n");
	}
	else if(Average>=50)
	{
	printf("\n\nGrade                           C\n");
	}
	else
	{
	printf("\n\nGrade                           Fail\n");
	}
	printf("\n------------------------------------------------------");
	getch();
	return 0;
}
