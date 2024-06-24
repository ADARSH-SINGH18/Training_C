#include<stdio.h>

int main()
{
	int a,
	    b,
	    c;
	printf("\n Enter three numbers : ");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(b>c)
		{
			printf("second number is largest : %d \n",b);
		}
		else printf("third number is larges : %d \n",c);
	}
	else
	{
		if(a>c)
		{
			printf("first number is largest : %d \n",b);
		}
		else printf("third number is larges : %d \n",c);
	}
	return 0;
}
