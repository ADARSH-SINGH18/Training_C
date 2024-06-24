#include<stdio.h>

int main()
{
	int a,
	    b,
	    c;
	printf("\n Enter first value : ");
	scanf("%d",&a);
	printf("\n Enter second value : ");
	scanf("%d",&b);

	printf("\n press 1 for add");
	printf("\n press 2 for subtract");
	printf("\n press 3 for multiply");
	printf("\n press 4 for divide");
	printf("\n press 5 for bitwise and");
	printf("\n press 6 for bitwise or");
	printf("\n press 7 for bitwise not");
	printf("\n Enter the option : ");
	scanf("%d",&c);
        
	int ans,
	    check=0;
	switch(c)
	{
		case 1: ans=a+b;
			break;
		
		case 2: ans=a-b;
		 	break;
		
		case 3: ans=a*b;
			break;
		
		case 4: ans=a/b;
			break;

		case 5: ans=a&b;
			break;

		case 6: ans=a|b;
			break;

		case 7: check=1;
			printf("\n first value bitwise not : %d \n second value bitwise not : %d \n",~a,~b);
			break;
		
		default : printf("\n Wrong option chossen: \n");
	}
	
	printf("\n",(check==0 ? printf("\n Result : %d\n",ans): printf("\n")));	

	return 0;
}
