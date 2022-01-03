#include<stdio.h>
void main()
{
	int x,y;
	printf("enter the number");
	scanf("%d ",&x);
	for(y=1;y<=20;y++)
	{
		printf("%d * %d = %d\n ",x,y,x*y);
	}
}
