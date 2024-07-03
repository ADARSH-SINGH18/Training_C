#include<stdio.h>
#include<string.h>

int main(){
	char str[1000],ans[1000]={""};
	printf("\n Enter the string :");
	fgets(str,1000,stdin);
	int len=strlen(str);
	if(str[len-1]=='\n'){
		str[len-1]=='\0';
	}
	int j=0;
	for(int i=0;i<len-1;i++){
		if((str[i]==(str[i+1])+1) &&((str[i+1])!=str[i+2]) ){
			i++;
		}
		else if(str[i]!=str[i+1]){
			ans[j]=str[i];
			j++;
		}	
	}
	if(ans[j]!=str[len-1]){
		ans[j]=str[len-1];	
	}
	printf("\n string after removal of duplicate value: %s\n",ans);
}
