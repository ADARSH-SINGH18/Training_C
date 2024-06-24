#include<stdio.h>

int main()
{
	int grade;
	printf("\n Enter the grades : ");
	scanf("%d",&grade);

	if(grade<=100 && grade>=90)
		printf("\n grade A \n");
	else if(grade<=89 && grade>=80)
		printf("\n grade B \n");
	else if(grade<=79 && grade>=70)
		printf("\n grade C \n");
	else if(grade<=69 && grade>=60)
		printf("\n grade D \n");
	else if(grade<=60 && grade>=0)
		printf("\n grade F \n");
	else printf("Enter grade between 0-100: \n");
	return 0;
}










