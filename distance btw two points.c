#include<stdio.h>
#include<math.h>
void main()
{
	int a,b,c,d;
	float e;
	printf("enter the values of a,b");
	scanf("%d%d",&a,&b);
	printf("enter the values of c,d");
	scanf("%d%d",&c,&d);
	e=sqrt(pow(c-a,2)+pow(d-b,2));
	printf("%.4f",e);
	
}
