#include<stdio.h>
#include<string.h>

int main()
{
	int n;
	printf("\n Enter the number of test case : ");
	scanf("%d",&n);

	while(n--){
		char date1[100],
		     date2[100],
		     te1[3][10],
		     te2[3][10];
		printf("\n Enter date 1 in format h/m/s ");
		scanf("%s",date1);
		printf("\n Enter date 2  in format h/m/s ");
		scanf("%s",date2);
		
		int i=0;
		char *token=strtok(date1,"/");
		while(token!=NULL){
			strcpy(te1[i],token);
			token=strtok(NULL,"/");
			i++;
		}
		int j=0;
		char *token1=strtok(date2,"/");
		while(token1!=NULL){
			strcpy(te2[j],token1);
			token1=strtok(NULL,"/");
			j++;
		}

		printf("\n%s\n%s\n",te1[0],te2[0]);
		printf("\n%s\n%s\n",te1[1],te2[1]);
		printf("\n%s\n%s\n",te1[2],te2[2]);
		
		
		if(strcmp(te1[0],te2[0])==0){
			if(strcmp(te1[1],te2[1])==0){
				if(strcmp(te1[2],te2[2])==0){
					printf("\n Equal \n");
				}
				else if(strcmp(te1[2],te2[2])>0){
					printf("\n Greater \n");
				}
				else{
					printf("\n smaller \n");
				}
			}
			else if(strcmp(te1[1],te2[1])>0){
				printf("\n Greater \n");
			}
			else{
				printf("\n smaller \n");
			}
		}
		else if(strcmp(te1[0],te2[0])>0){
			printf("\n Greater \n");
		}
		else{
			printf("\n smaller \n");
		}

	}
	return 0;
}

