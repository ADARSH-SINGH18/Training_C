#include<stdio.h>
#include<string.h>

int main(){
	char a[20],
	     b[20];

	printf("\n Enter both the strings : ");
	fgets(a,20,stdin);
	fgets(b,20,stdin);

	int len_a=strlen(a),
	    len_b=strlen(b);

	if(a[len_a-1]=='\n')
		a[len_a-1]='\0';
	if(b[len_b-1]=='\n')
		b[len_b-1]='\0';
	
	int h1[26]={},
	    h2[26]={}; 
	for(int i=0;i<len_a;i++)
		h1[a[i]-'a']++;
	for(int i=0;i<len_b;i++)
		h2[b[i]-'a']++;

	int flag=0;
	for(int i=0;i<26;i++){
		if(h1[i]!=h2[i]){
			flag=1;
			break;
		}
	}
	if(flag==0)
		printf("\n Both string are anagrams : \n");
	else
		printf("\n Both string are not anagrams : \n");
	return 0;
}	
