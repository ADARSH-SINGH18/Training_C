#include<stdio.h>
#include<stdlib.h>

void merge(int *arr,int f,int m,int l){
	int n1=m-f+1;
	int n2=l-m;
	int a[n1],b[n2];
	for(int i=0;i<n1;i++)
		a[i]=arr[f+i];
	for(int i=0;i<n2;i++)
		b[i]=arr[m+i+1];
	int i=0,
	    j=0,
	    k=f;
	while(i<n1 && j<n2){
		if(a[i]<=b[j]){
			arr[k++]=a[i++];
		}
		else{
			arr[k++]=b[j++];
		}
	}
	
	while(i<n1){
		arr[k++]=a[i++];
	}
	while(j<n2){
		arr[k++]=b[j++];
	}
}
void mergesort(int *arr,int l, int r){
	if(l<r){
	int mid = l+(r-l)/2;
	mergesort(arr,l,mid);
	mergesort(arr,mid+1,r);
	merge(arr,l,mid,r);
	}
}
int main()
{
	int arr[]={65,34,65,76,23,34,76,12};
	int len=sizeof(arr)/sizeof(arr[0]);
	
	mergesort(arr,0,len-1);
	int u=0;
	for(int i=0;i<len-1;i++){
		if(arr[i]!=arr[i+1]){
		       arr[u+1]=arr[i+1];
		       u++;
		}
	}

	for(int i=0;i<=u;i++){
		printf("%3d \n",arr[i]);
	}
	return 0;
}
