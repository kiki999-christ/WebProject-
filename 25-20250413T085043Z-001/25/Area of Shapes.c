#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int r_area,l,w,s,s_area,r,c_area,t_area,b,h;
	int option;
	printf("Which shape do you want to calculate its Area?\n");
	printf("1. Rectangle \n2.Square \n3.Triangle \n4.Circle \n");
	scanf("%d",&option);
	switch(option)
	{ 
	case 1:printf("Input the length and width values:");
	       scanf("%d %d",&l,&w);
	       r_area=l*w;
	       printf("the area of rectangle=%d\n",r_area);
	       break;
	case 2:printf("Input the side value:");
	       scanf("%d",&s);
	       s_area=s*s;
	       printf("The Area Of The Square=%d\n",s_area);
	       break;
	case 3:printf("Input the Base and the Height values:");
	       scanf("%d %d",&b,&h);
	       t_area=((b*h)/2);
	       printf("\nThe Area Of The Triangle=%d",t_area);
	       break;
	case 4:printf("Input The Radius Value:");
	       scanf("%d",&r);
	       c_area=r*r*M_PI;
	       printf("The Area Of The Circle=%d\n",c_area);
	       break;
	default:printf("Invalid shape number entered, Try again.");      
	}
	printf("\nLearning if statements\n");
	getch();
	return 0;
}
