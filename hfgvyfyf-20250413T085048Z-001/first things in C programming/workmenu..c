#include <stdio.h>
#include <conio.h>
int main()
{   
    int op,totalamount,change;
	int plate,plates;
    int ff=3500,cp=2500,nw=1500;
//int ff,cp,nw;

printf("  \t\tMENU\n");
printf("\t\t----\n"); 
printf("\nORDER   | FOOD                     |  PRICE PER QUANTITY|\n");
printf("--------------------------------------------------------\n");
printf(" 1.\t| French Fries with Liver  |  3500              |   ",ff);
printf("\n 2.\t| chicken pilau            |  2500              | ",cp);
printf("\n 3.\t| Nile water               |  1500              |",nw); 
printf("\n--------------------------------------------------------|\n");

printf("\npls,Enter your Receipt(1/2/3): ");
scanf("%d",&op);
printf("\nNo of plates: ");
scanf("%d",&plate);

switch(op)
  {
  	case 1:printf("\nFRENCH FRIES with LIVER\n:",ff);
	plates=plate*ff;
  	break;
  	case 2:printf("\nCHICKEN PILAU\n",cp);
  	plates=plate*cp;
  	break;
  	case 3:("\nNILE WATER\n",nw);
  	plates = plate*nw;
  	break;
  	default:printf("\n recipe is not on our menu...");
  	return 1;
  }
      printf("\n-------------- RECEIPT------------------\n\n");
    printf("Food Item:\t\t\t");
    switch (op) {
        case 1: printf("French Fries with Liver\n"); break;
        case 2: printf("Chicken Pilau\n"); break;
        case 3: printf("Nile Water\n"); break;
    }
    printf("No.Plates:\t\t\t%d\n", plate);
    printf("Price per Plate:\t\t");
    switch (op) {
        case 1: printf("%d\n", ff); break;
        case 2: printf("%d\n", cp); break;
        case 3: printf("%d\n", nw); break;
    }
  
printf("TOTAL PRICE:\t\t\t%d\n",plates);

printf("TOTAL AMOUNT PAID BY CLIENT:\t");
scanf("%d",&totalamount);

if (totalamount <plates)
    {
	printf("\nINSUFFICIENT PAYMENT! YOU OWE %d more.\n",plates-totalamount);
    }
else
    {
 	change=totalamount-plates;
 	printf("CHANGE:\t\t\t\t%d\n",change);
    }
    printf("\n----------------WELCOME BACK!!------------------");
getch();
return 0;	
}