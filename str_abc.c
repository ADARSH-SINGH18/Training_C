#include<stdio.h>
#include<string.h>

int main(){
	char a[100],
	     b[100],
	     c[200];

	printf("Enter all 3 strings: \n");
	scanf("%s",a);
	getchar();
	scanf("%s",b);
	getchar();
	scanf("%s",c);
	getchar();

	int arr[26]={};
	for(int i=0;i<strlen(a);i++){
		arr[a[i]-'a']++;
	}
	for(int i=0;i<strlen(b);i++){
		arr[b[i]-'a']++;
	}
	for(int i=0;i<strlen(c);i++){
		arr[c[i]-'a']--;
	}
	int flag=0;
	for(int i=0;i<strlen(c);i++){
		if(arr[i]!=0)
			flag=1;
	}
	if(flag==0){
		printf("\n A and B string can be formed using C string");
	}
	else
		printf("\n A and B string cannot be formed using C string");
	return 0;

	     
}
