#include<stdio.h>

int main()
{
	float te,
	    he,
	    we;
	printf("\n Enter the height and weight : ");
	scanf("%f%f",&he,&we);
	te = we/(he*he);

	if(te < 18.5 )
		printf("\n Underweight \n");
	else if(te <= 24.9 && te >= 18.5)
		printf("\n Normal weight \n");
	else if(te <= 29.9 && te >= 25)
		printf("\n Overweight \n");
	else if(te >= 30)
		printf("\n Obesity \n");
	return 0;
}










