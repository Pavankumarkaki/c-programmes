#include<stdio.h>
void main()
{
  int n,r,count=0;
  scanf("%d",&n);
  while(n>0)
  {
  	r=n%10;
  	n=n/10;
  	count++;
  	printf("%d\n",r);
  }	
  printf(" number of digits is %d",count);
}
