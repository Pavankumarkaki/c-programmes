#include<stdio.h>
int main ()
{
	int a,b,i,c,x,y;
	printf("enter the number for LCM");
	scanf("%d%d",&a,&b);
	if(a>b)
	{
		x=a;
		y=b;	
	}
	else
	{
		x=b;
		y=a;
	}
	for(i=1;i<=y;i++)
	{
		c=x*i;
		//printf("%d ",c);
		if(c%y==0)
		{
			printf("\nLCM is : %d ",c);
			break;
		} 
		
	}
}
