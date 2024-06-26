#include<stdio.h>

int main()
{
	int arr[] ={23,4,53,2,33,43,64,21};
	int len = sizeof(arr)/sizeof(arr[0]);
	int l=arr[0],
	    sl=arr[0];

	for(int i=0;i<len;i++)
	{
		if(l<arr[i]){
			sl=l;
			l=arr[i];
		}
	}
	printf("\n Second largest element : %d \n",sl);
	return 0;
}
