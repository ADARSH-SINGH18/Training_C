#include<stdio.h>
#include<string.h>

int main()
{
	char str[100][200];
	int n;
	printf(" \n Enter the size of string : ");
	scanf("%d",&n);

	for(int i=0;i<n;i++){
		scanf("%s",str[i]);
	}

	for(int i=0;i<n-1;i++){
		int flag=0;
		for(int j=0;j<n-1;j++){
			flag=strcmp(str[j],str[j+1]);
			if(flag>0){
				char temp[200];
				strcpy(temp,str[j]);
				strcpy(str[j],str[j+1]);
				strcpy(str[j+1],temp);
			}	
		}	
	}

	for(int i=0;i<n;i++){
		printf("\n%s\n",str[i]);
	}

	return 0;
}

