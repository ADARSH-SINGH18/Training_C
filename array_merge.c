#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
	int n,
	    m;
	printf("\n Enter the size of  both array : \n");
	scanf("%d%d",&n,&m);
	int *a = (int *)malloc(n*sizeof(int));
	int *b = (int *)malloc(m*sizeof(int));
	int *c = (int *)malloc((n+m)*sizeof(int));
	for(int x=0;x<n;x++){
		scanf("%d",&a[x]);
	}
	for(int x=0;x<m;x++){
		scanf("%d",&b[x]);
	}
	int i=0,
	    j=0,
	    k=0;
	while(i<n && j<m){
		if(a[i]>b[j]){
			c[k++]=b[j++];
		}
		else{
			c[k++]=a[i++];
		}
	}
	while(i<n){
		c[k++]=a[i++];
	}
	while(j<m){
		c[k++]=b[j++];
	}
	
	for(int x=0;x<k;x++){
		printf(" %d ",c[x]);
	}
	return 0;
}

