#include<stdio.h>
#include<string.h>
int main()
{
	char str[15];
	printf("\n Enter postive integer : ");
	scanf("%s",str);

	int sum=0;
	for(int i=0;i<strlen(str);i++){
		sum += (str[i]-'0');
	}
	printf("\n Sum of numbers : %d",sum);

	return 0;
}
