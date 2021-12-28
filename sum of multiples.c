#include<stdio.h>
void main()
{
	int x,y,s,n,l;
	printf("enter the x ");
	scanf("%d",&x);
	printf("enter the value of y ");
	scanf("%d",&y);
	if(y>=x)
	{
		n=y/x;
		l=x*n;
		s=(n*x+n*l)/2;
		printf("sum of %d multiples under %d is %d ",x,y,s);
	}
	else
	{
		printf(" invalid");
	}
}
