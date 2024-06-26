#include<stdio.h>
#include<stdlib.h>

int main()
{
	int r,
	    c;
	printf("\n Enter number of row and column : ");
	scanf("%d%d",&r,&c);

	int **arr = (int**)malloc(r*sizeof(int));
	     for(int i=0;i<r;i++)	
	     	arr[i] = (int*)malloc(c*sizeof(int));
	     
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			scanf("%d",&arr[i][j]);
		}
	}

	int **arr1 = (int**)malloc(c*sizeof(int));
	     for(int i=0;i<c;i++)
	     	arr1[i] = (int*)malloc(r*sizeof(int));
	
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			arr1[j][i]=arr[i][j];
		}
	}
	for(int i=0;i<c;i++){
		for(int j=0;j<r;j++){
			printf("%7d",arr1[i][j]);
		}
		printf("\n");
	}

	return 0;
}
	
