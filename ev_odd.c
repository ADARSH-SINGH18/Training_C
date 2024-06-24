#include<stdio.h>

int main()
{
	long long int num;
	
	printf("\n Enter the number : ");
	scanf("%lld",&num);
	int x = num&1;
	printf("%d",num&1);	
	if( (num&1) != 1)
	{
		printf("\n Number is even \n");
	}
	else
	{
		printf("\n Number is odd \n");
	}
	return 0;
}
