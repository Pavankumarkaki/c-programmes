#include<stdio.h>
void main()
{
	int gs,pt,it,pf,ns;
	printf("enter the gross salary");
	scanf("%d",&gs);
	printf("enter the pt");
	scanf("%d",&pt);
	printf("enter the it");
	scanf("%d",&it);
	printf("enter the pf");
	scanf("%d",&pf);
	ns=gs-(pt+pf+it);
	printf("%d",ns);
	
	
}
