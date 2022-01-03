#include<stdio.h>
void main()
{
	int x,y,i;
	printf("enter the x and y values");
	scanf("%d%d",&x,&y);
	for(i=x;i<=y;i++)
	{
		printf("%d %d %d\n ",i,i*i,i*i*i);
	}
}
