#include<stdio.h>
#include<string.h>

int palin(char *str,int n){
	int i=0;
	while(i<(n/2)){
		if(str[i]!=str[n-i-1]){
			return 0;
		}
		i++;
	}
	if(n==4)
		return 5;
	else
		return 10;
}

int main(){
	char str[200];

	printf("\n Enter the string ");
	getchar();
	fgets(str,200,stdin);

	int len = strlen(str);

	if(str[len-1]=='\n')
		str[len-1]='\0';
	
	int sum=0;
	for(int i=0;i<len-4;i++){
		sum += palin(str+i,4);
	}
	for(int i=0;i<len-5;i++){
		sum += palin(str+i,5);
	}
	printf("\n Score : %d \n",sum);
	return 0;

}

