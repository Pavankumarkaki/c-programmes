#include<stdio.h>
void main()
{
	char ch;
	int a,b;
	scanf("%c",&ch);
	switch(ch)
	{
		case '+':printf("enter the a, b values ");
		         scanf("%d %d",&a,&b);
		         printf("%d",a+b);
		         break;
		case '-':printf("enter the a, b values ");
		         scanf("%d %d",&a,&b);
		         printf("%d",a-b);
		         break;
	    case '*':printf("enter the a, b values ");
		         scanf("%d %d",&a,&b);
		         printf("%d",a*b);
		         break;
		case '/':printf("enter the a, b values ");
		         scanf("%d %d",&a,&b);
		         printf("%d",a/b);
		         break;
		case '%':printf("enter the a, b values ");
		         scanf("%d %d",&a,&b);
		         printf("%d",a%b);
		         break;		 		          
	}
}
