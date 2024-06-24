#include<stdio.h>
#include<math.h>

int main()
{
	int bin;
	double dec;
	printf("\n Enter decimal input : ");
	scanf("%d",&bin);
	int x=0;
	while(bin != 0)
	{
		int t = bin%10;
		    if(t==1)
		    {
		    	dec += pow(2,x);
		    }
	    	x++;
    		bin = bin/10;
	}	
	printf("\n Decimal equvalient : %lf \n",dec);
	return 0;
}	
