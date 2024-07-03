#include<stdio.h>
#include<string.h>

int check(char *str,int n){
	for(int i=0;i<n-1;i++){
		if(str[i]==str[i+1])
			return 0;
	}
	return 1;
}

int main(){
	char str[1000];
	printf("\n Enter the string :");
	fgets(str,1000,stdin);
	int len=strlen(str);
	if(str[len-1]=='\n'){
		str[len-1]='\0';
	}
	while(1){
	int j=0;
	char ans[1000]={""};
	for(int i=0;i<len-2;i++){
		if((str[i]==str[i+1]) &&(str[i+1]!=str[i+2]) ){
			i++;
		}
		else if(str[i]!=str[i+1]){
			ans[j]=str[i];
			j++;
		}	
	}
	if(ans[j]!=str[len-1]){
		printf("%c-%c",ans[j],str[len-1]);
		j++;	
	}
	//strcpy(str,ans);
	printf("%d %d\n",len,j);
	printf("%s%s\n",str,ans);
	strcpy(str,ans);
	len=strlen(str);
	int flag = check(str,len);
	printf("%d %d\n",flag,len);
	if(flag==1)
		break;
	}
	printf("\n string after removal of duplicate value: %s\n",str);
}
