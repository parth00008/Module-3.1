#include<stdio.h>
main()
{
	float interest,p,r,t;
	
	printf("enter the value: ");
	scanf("%f%f%f",&p,&r,&t,&interest);
	
	interest=p*r*t/100;
	
	
	printf("your interest is: %f",interest);
}
