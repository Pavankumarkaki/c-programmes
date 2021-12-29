#include<stdio.h>
void main()
{
	int choice,s,l,w,b,h,p,t,r;
	printf("enter your choice\n1.area of square\n2.area of rectangle\n3.area of triangle\n4.simple intrest : ");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("enter the side of square value ");
		         scanf("%d",&s);
		         printf("%d",s*s);
		         break;
		case 2:printf("enter the length and width of rectangle value ");
		         scanf("%d %d",&l,&w);
		         printf("%d",l*w);
		         break;         
		case 3:printf("enter the base and height of triangle value ");
		         scanf("%d %d",&b,&h);
		         printf("%d",(b*h)/2);
		         break;         
	    case 4:printf("enter the principle amount,time,rate of intrest of square value ");
		         scanf("%d%d%d",&p,&t,&r);
		         printf("%d",(p*t*r)/100);
		         break;
	}
}
