#include<stdio.h>
#include<string.h>
int main()
{
	char str[1000];
	printf("\n Enter the string : ");
	fgets(str,1000,stdin);

	int len=strlen(str);
	if(str[len-1]=='\n')
		str[len-1]='\0';

	char s[1000];
	strcpy(s,"");	
	int l=0;	
	for(int i=len-1;i>=0;i--){
		if(str[i]==' '){
			strncat(s,str+i,l);
			//printf("\n %s \n",s);
			l=0;
		}
		l++;
	}
	strcat(s," "); 
	strncat(s,str,l);
	printf("\n %s \n",s);
	return 0;
}



