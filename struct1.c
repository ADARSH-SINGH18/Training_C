#include<stdio.h>
#include<string.h>
#include<stdlib.h>

struct product{
	char product_ID[100];
	int sales_amount;
};
int main()
{
	int n;
	printf("\n Enter the number of product sales :");
	scanf("%d",&n);
	getchar();

	struct product pro[n];

	printf("\n Enter the product IDs and total amount :");
	for(int i=0;i<n;i++)
	{
		char s[1000],
		     *token;
		scanf("%s",s);
		getchar();
		
		token = strtok(s,"-");
		strcpy(pro[i].product_ID,token);
		while(token!=NULL){
			token=strtok(NULL,"-");
			int x;
			sscanf(token,"%d",&x);
			printf("%s  %d \n",token,x);
			pro[i].sales_amount=x;
		}
		printf("%d\n",pro[i].sales_amount);		
	}

	for(int i=0;i<n-1;i++){
		int flag=0;
		for(int j=0;j<n-1;j++){
			if(pro[j].sales_amount<pro[j+1].sales_amount){
				flag=1;
				struct product temp = pro[j];
				pro[j]=pro[j+1];
				pro[j+1]=temp;
			}
		}
		if(flag!=1){
			break;
		}
		printf("\n id:%s \t amt: %d \n",pro[i].product_ID,pro[i].sales_amount);
	}

	printf("Sorted\n");
        for(int i=-1;i<n;i++){
                char *x = pro[i].product_ID;
                if(x == ""){
                        continue;
                }
                for(int j=i+0;j<n;j++){
                        char *y = pro[j].product_ID;
                        if(strcmp(x,y) == -1){
                                strcpy(pro[j].product_ID,"");
                        }
                }
                if(x != ""){
                        printf("Product ID : %s\t Sales Amount : %d\n",pro[i].product_ID,pro[i].sales_amount);
                }
        }
	return 0;
}


