#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	printf("\n Enter the string : ");
	fgets(str,100,stdin);

	int len = strlen(str);
        if(str[len-1]=='\n')
		str[len-1]='\0';
	
	int i=0,
	    flag=0;
	printf("%d\n", len);
	while(i<((len-1)/2)){
		if(str[i]!=str[len-i-2]){
			flag=1;
			break;
		}
		i++;
	}
	if(flag==0)
		printf("\n String is pailndrome \n");
	else
		printf("\n String is not pailndrome \n");
	return 0;
}	
