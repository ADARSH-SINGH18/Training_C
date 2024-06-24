#include<stdio.h>

int main()
{
	int te;
	printf("\n Enter the today's temperature : ");
	scanf("%d",&te);

	if(te > 30  )
		printf("\n It's hot outside, stay hydrated! \n");
	else if(te <= 30 && te >= 20)
		printf("\n The weather is nice and warm \n");
	else if(te <= 19 && te >= 10)
		printf("\n It's bit chilly, wear a jacket \n");
	else if(te < 10)
		printf("\n It's cold outside, stay warm! \n");
	return 0;
}










