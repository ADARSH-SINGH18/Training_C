#include<stdio.h>

int main()
{
	int arr[] = {1,2,3,4,5,6,7};
	int len = sizeof(arr)/sizeof(arr[0]);
	int n;

	printf("\n Enter the number of rotaion : ");
	scanf("%d",&n);

	int i=0;
	while(i<(n/2)){
		int temp = arr[i];
		arr[i] = arr[n-1-i];
		arr[n-1-i]=temp;
		i++;
	}
	i=n;
	while(i<len/2){
		int temp = arr[i];
		arr[i] = arr[len-1-i];
		arr[len-1-i]=temp;
		i++;
	}
	i=0;
	while(i<len/2){
		int temp = arr[i];
		arr[i] = arr[len-1-i];
		arr[len-1-i]=temp;
		i++;
	}
	for(int j=0;j<len;j++){
		printf("\n %d \n",arr[j]);
	}
	return 0;
}
	
