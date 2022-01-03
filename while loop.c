#include<stdio.h>
void main()
{
	int x,y;
	printf("enter x and y values");
	scanf("%d%d",&x,&y);
	while(x<y)
	{
		printf("%d ",x);
		x++;
	}
}
