// area of circle = 3.14 *r*r;
#include<stdio.h>
//#define PI 3.14 

main()
{
	float r,area,PI=3.14;
	printf("enter radius: ");
	scanf("%f",&r,&PI);
	
	area=PI*r*r;
	printf("area of circle is: %.2lf",area);
}


