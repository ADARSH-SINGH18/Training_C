#include<stdio.h>
#include<string.h>
#include<stdlib.h>
struct product{
	char pID[1000];
	int qty;
};

int main()
{
	int n;
	printf("Enter the number of test cases: \n");
	scanf("%d",&n);
	getchar();
	struct product *pro = (struct product *)malloc(n*sizeof(struct product));
	for(int j=0;j<n;j++){
		char str[1000];
		printf("\nEnter the string : \n");
		fgets(str,1000,stdin);
		//getchar();
		int len=strlen(str);
		if(str[len-1]=='\n'){
			str[len-1]='\0';
		}
		char *token = strtok(str,"-");
		strcpy(pro[j].pID,token);
		if(token!=NULL){
			token = strtok(NULL,"-");
			int num=0;
			for(int i=0;token[i]!='\0';i++){
				num = (num*10) + (token[i]-'0');
			}
			pro[j].qty=num;
		}

	}
	for(int j=0;j<n;j++){
		if(pro[j].qty!=-1){
		for(int i=j+1;i<n;i++){
			if(strcmp(pro[j].pID,pro[i].pID)==0){
				if(pro[j].qty<pro[i].qty){
					pro[j].qty=pro[i].qty;
					pro[i].qty=-1;
				}
				else{
					pro[i].qty=-1;
				}
			}
		}
		}
	}
	for(int j=0;j<n;j++){
		for(int i=0;i<n;i++){
			if(pro[j].qty>pro[i].qty){
				struct product te = pro[j];
				pro[j]=pro[i];
				pro[i]=te;
			}
		}
	}
	int i=0;
	while(i<n && pro[i].qty!=-1){
		printf("\n %s-%d \n",pro[i].pID,pro[i].qty);
		i++;
	}
	return 0;
}
