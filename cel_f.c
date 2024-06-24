#include<stdio.h>

int main()
{
	float c,
	    fe;
	printf("\n Enter the temperature in celsius: ");
	scanf("%f",&c);
	fe = (c * 1.8) + 32;
	printf("\n temperature in fahrenheit is : %f \n",fe);
	return 0;
}
