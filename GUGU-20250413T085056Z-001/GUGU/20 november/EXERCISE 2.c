#include<stdio.h>
#include<conio.h>
int main()
{
	float English,Mathematics,Programming_in_C,Introduction_to_ICT;
	float Summation;
	float Average;
	char Student_Name[40]; 
	char Department[5];
	int Reg_No,Year;
	printf("Names:");
	gets(Student_Name);
	printf("Department:");
	scanf("%s",Department);
	getchar();
	printf("Reg No:");
	scanf("%d",&Reg_No);
	getchar();
	printf("Year:"),
	scanf("%d",&Year);
	getchar();
	printf("English:");
	scanf("%f",&English);
	getchar();
	printf("Mathematics:");
	scanf("%f",&Mathematics);
	getchar();
	printf("Programming in C:");
	scanf("%f",&Programming_in_C);
	getchar();
	printf("Introduction to ICT:");
	scanf("%f",&Introduction_to_ICT);
	getchar();
	Summation=English+Mathematics+Introduction_to_ICT+Programming_in_C;
	printf("Summation:%.2f",Summation);
	Average=Summation/4;
	printf("\nAverage:%.2f",Average); 
	printf("\n\n            UNIVERSITY OF KIGALI STUDENT TRANSCRIPT");
	printf("\n\nDEPARTMENT:%s                  YEAR:%d",Department,Year);
	printf("\n\nReg No.:%d                  Student Name:%s",Reg_No,Student_Name);
	printf("\n\nSUBJECT                         MARKS\n");
	printf(".....................................................\n");
	printf("\n\nProgramming in C:               %.2f",Programming_in_C);
	printf("\n\nEnglish:                        %.2f",English);
	printf("\n\nMathematics:                    %.2f",Mathematics);
	printf("\n\nIntroduction to ICT:            %.2f\n",Introduction_to_ICT);
	printf(".....................................................\n");
	printf("\n\nSummation:                      %.2f",Summation);
	printf("\n\nAverage:                        %.2f",Average);
	printf("\n\nThank you for your attendency!");
	getch();
	return 0;
}
