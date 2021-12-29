#include<stdio.h>
void main()
{
	int m_ch,s_ch;
	int a,b;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	printf("enter you main choice\n1. arithmetic\n2.relational");
	scanf("%d",&m_ch);
	switch (m_ch)
	{
		case 1:
			printf("enter your sub choice\n1. + \n2. - \n3. * \n4. / \n5. %%");
			scanf("%d",&s_ch);
			switch(s_ch)
			{
			case 1:
				printf("%d + %d = %d",a,b,a+b);
				break;
			case 2:
				printf("%d - %d =%d",a,b,a-b);
			    break;
			case 3:
				printf("%d * %d =%d",a,b,a*b);
			    break;
			case 4:
				printf("%d / %d =%d",a,b,a/b);
			    break;			
			case 5:
				printf("%d %% %d =%d",a,b,a%b);
			    break;    
			break;
		    }
		case 2:
			printf("enter your sub choice\n1. >\n2. <\n3. >=\n4. <=\n5. ==\n6. !=");
			scanf("%d",&s_ch);
			switch (s_ch)
			{
			case 1:
				printf("%d > %d  is %d",a,b,a>b);
				break;
			case 2:
				printf("%d < %d  is %d",a,b,a<b);
			    break;
			case 3:
				printf("%d >= %d  is %d",a,b,a>=b);
			    break;
			case 4:
				printf("%d =< %d  is %d",a,b,a<=b);
			    break;
			case 5:
				printf("%d == %d  is %d",a,b,a==b);
			    break;
			case 6:
				printf("%d != %d  is %d",a,b,a!=b);
			    break;			
			break;
		    }
	}
}
