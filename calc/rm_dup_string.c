#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n;
	printf("\n Enter the size of string : ");
	scanf("%d",&n);
	char *str = (char*)malloc(n*sizeof(char));
	printf("\n Enter the string : ");
	scanf("%s",str);

	int a[26]={};
	for(int i=0;i<n;i++){
		if(a[str[i]-'a']==0)
			printf("%c",str[i]);
		a[str[i]-'a']++;
	}
	return 0;
}
