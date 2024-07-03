#include<stdio.h>
#include<string.h>

int main(){
	char str[1000];
	printf("Enter the strings \n");
	fgets(str,1000,stdin);
	int len=strlen(str);
	char *ss[100];
	if(str[len-1]=='\n')
		str[len-1]='\0';
	char *token = strtok(str,"|");
	int i=0;
	while(token!=NULL){
		ss[i++]=token;
		token=strtok(NULL,"|");
	}
	for(int j=0;j<i;j++){
		int t1[26]={};
		for(int k=0;k<strlen(ss[j]);k++){
			t1[ss[j][k] - 'a']++;
		}
		int counter=0;
		if(ss[j][0]=='1'){
			continue;
		}
		for(int x=j+1;x<i;x++){
			int t2[26]={},
			    flag=0;
			for(int k=0;k<strlen(ss[j]);k++){
				t2[ss[x][k] - 'a']++;
			}
			for(int k=0;k<26;k++){
				if(t1[k]!=t2[k]){
					flag=1;
					break;
				}
			}
			if(flag==0 && counter == 0){
				counter=1;
				printf("%s \n",ss[j]);
				memset(ss[x],'1',sizeof(ss[x]));
			}
			else if(flag==0){
				memset(ss[x],'1',strlen(ss[x]));
			}
			
		}
	}
	return 0;

}
