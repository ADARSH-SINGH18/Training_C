#include<stdio.h>
#include<string.h>

int main()
{
	char str[200];
	printf("\n Enter the string ");
	fgets(str,200,stdin);

	int len=strlen(str);

	if(str[len-1]=='\n')
		str[len-1]='\0';

	char *token = strtok(str," ");
	char ar[len][100];
	int i=0,
	    p=0;
	while(token!=NULL){
		if(p!=0){
			int flag=0;
			for(int j=0;j<i;j++){
				if(strcmp(ar[j],token)==0){
					flag=1;
					break;	
				}
			}
			if(flag==0){
				strcpy(ar[p],token);
				p++;
			}
		}
		else{
			strcpy(ar[p],token);
			p++;
		}
		token = strtok(NULL," ");
		i++;
	}

	for(int j=0;j<p-1;j++){
		for(int k=0;k<p-1;k++){
			char temp[100];
			if(strcmp(ar[k],ar[k+1])>0){
				strcpy(temp,ar[k]);
				strcpy(ar[k],ar[k+1]);
				strcpy(ar[k+1],temp);
			}
		}
	}

	for(int j=0;j<p;j++){
		printf("\n%s\n",ar[j]);
	}
	return 0;
}

