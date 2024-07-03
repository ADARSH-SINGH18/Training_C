#include<stdio.h>
#include<string.h>

int subst(char *str,char *s,int n){
	char temp[100]="";
	//strcpy(temp,"");
	strncpy(temp,str,n);
	//printf("\n%s\t%s\t%s %d\n",temp,s,str,n);
	if(strcmp(temp,s)==0){
		return 1;	
	}
  	return 0;
}

int main()
{
	char str[1000],
	     s[100];

	printf("\n Enter the string : ");
	fgets(str,1000,stdin);

	int len = strlen(str);

	if(str[len-1]=='\n')
		str[len-1]='\0';

	printf("Enter the substring : ");
	scanf("%s",s);
	getchar();
	int n=strlen(s),
	    flag=0,
	    pos=-1;

	for(int i=0;i<(len-n);i++){
		flag=subst(str+i,s,n);
		if(flag==1){
			pos=i;
		}	
	}
	//printf("\n%d\n",pos);
	if(pos==-1){
		printf("\n Substring not found : \n");
	}
	else{
		/*for(int i=pos;i<len-1;i++){
			str[i]=str[i+n];
		*/
		strcpy(str+pos,str+(pos+n));
		printf("\n Subtring found at index : %s \n",str);
	}
	return 0;
}
