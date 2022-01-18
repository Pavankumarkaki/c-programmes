#include<stdio.h>
int main()
{
    int m,n,i,countmain=0,countsub=0,j;
    scanf("%d%d",&m,&n);//2,13
    for(i=m;i<=n;i++)//2<13
    {
       for(j=1;j<=i;j++)//1<2
       {
       		if(i%j==0)
       		{
       		  countsub++;
			}
	   }
	  if(countsub==2)
	  {
	  	countmain++;
	  }
	   countsub=0;	
	   
    }
    printf("%d",countmain);
}
