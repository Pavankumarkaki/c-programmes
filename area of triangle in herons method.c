#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,s,area;
	printf("enter the a ,b, c sides of a triangle ");
	scanf("%f%f%f",&a,&b,&c);
	s=(a+b+c)/2.0;
	area=sqrt(s*(s-a)*(s-b)*(s-c));
	printf("area of triangel is %.3f",area);
}
