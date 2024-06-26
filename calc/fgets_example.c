#include <stdio.h>

int main(){
	printf("Enter the size of the string");
	int sz;
	scanf("%d",&sz);
	char buf[sz];
	printf("Enter the string : ");
	fgets(buf,sz,stdin);
	printf("string is %s\n",buf);

	return 0;
}

