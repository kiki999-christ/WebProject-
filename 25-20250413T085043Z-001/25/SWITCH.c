#include <stdio.h>
#include <conio.h>
int main()
{
	char ch;
	printf("Enter any character to check if it is a vowel:");
	scanf("%c",&ch);
	switch(ch)
	{ 
	case 'a':
	case 'A':
	case 'e':
	case 'E':
	case 'i':
	case 'I':
	case 'o':
	case 'O':
	case 'u':printf("%c is a vowel",ch);
	         break;
	default:printf("%c is not a vowel\n",ch);
	}
	printf("\nLearning if statements\n");
	getch();
	return 0;
}
