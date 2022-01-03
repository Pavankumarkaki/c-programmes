#include<stdio.h>
void main ()
{
	int x,y,i;
	printf("enter x and y values");
	scanf("%d%d",&x,&y);//x=1,y=20
	for(i=x;i<=y;i--)
	{
		printf("%d ",i);
	}
}

