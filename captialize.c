#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main()
{
	char str[1000];
	printf("\n Enter the string: ");
	fgets(str,1000,stdin);
	int len=strlen(str);
	if(str[len-1]=='\n'){
		str[len-1]='\0';
	}
	str[0]=toupper(str[0]);
	for(int i=0;i<(len-1);i++){
		if(str[i]==' '){
			str[i+1]=toupper(str[i+1]);
		}
	}
	printf("\n After captalizing the sentence : %s \n",str);
	return 0;

}
