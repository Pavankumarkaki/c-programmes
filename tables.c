#include<stdio.h>
void main()
{
	int x,y,i;
	printf("enter the number");
	scanf("%d",&x);
	printf("enter the limit");
	scanf("%d",&y);
	for(i=1;i<=y;i++)
	{
		printf("%d * %d = %d\n ",x,i,x*i);
	}
}
