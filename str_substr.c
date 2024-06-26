#include<stdio.h>
#include<string.h>

int main()
{
	char str[1000],
	     s[100],
	     c;

	printf("\n Enter the string : ");

	fgets(str,1000,stdin);

	int len=strlen(str);
	if(str[len-1]=='\n')
		str[len-1]='\0';
	
	printf("\n Enter the substring : ");
	scanf("%s",s);
	getchar();
	printf("\n Enter the character : ");
	scanf("%c",&c);

	char *sub = strstr(str,s);
	char *chr = strchr(str,c);
	

	if(sub==NULL){
		printf("\n -1 \n");
	}
	else{
		int pos_sub = sub-str;
		printf("\n Index of substring : %d \n",pos_sub);
	}
	if(chr==NULL){
		printf("\n -1 \n");
	}
	else{
		int pos_chr = chr-str;
		printf("\n Index of character : %d \n",pos_chr);
	}
	return 0;
}

	

