#include<stdio.h>
void main()
{
	int x,i,product=1;
	printf("enter the input  ");
	scanf("%d",&x);//4
	for(i=x;i>0;i--)
	{
		product=product*i;//20
	}
	printf("the factorial of %d is %d",x,product);
}
