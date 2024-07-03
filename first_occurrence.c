#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000],
	     c,
	     re;

	printf("\n Enter the string : ");
	fgets(str,1000,stdin);

	int len = strlen(str);

	if(str[len-1]=='\n')
		str[len-1]='\0';
	
	printf("\n Enter the character need to be replaced : ");
	scanf("%c",&c);
	getchar();
	printf("\n Enter the new character needed to add : ");
	scanf("%c",&re);

	char *pos = strchr(str,c);

	*pos=re;

	printf("\n New string after replacement : %s\n",str);

	return 0;
}
