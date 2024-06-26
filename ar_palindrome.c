#include<stdio.h>

int main()
{
	int n;
	printf("\n Enter the size of array : ");
	scanf("%d",&n);

	int *arr;
	arr = (int*)malloc(n*sizeof(int));

	printf("\n Enter the array of size %d : ",n);
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	
	int check=0,
	    i=0;
	while(i<n/2){
		if(arr[i]!=arr[n-1-i])
			check=1;
		i++;
	}

	if(check==1)
		printf("\n This Array is not a palindrome : \n");
	else
		printf("\n This Array is a palindrome : \n");

	return 0;
}



