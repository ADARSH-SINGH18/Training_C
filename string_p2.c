#include<stdio.h>
#include<math.h>

int main()
{
	double a,
	       ans;
	printf("\n Enter the number : ");
	scanf("%lf",&a);

	ans = pow(round(sqrt(a)),2);
	
	printf("\n Nearest square of natural number : %.0lf \n",ans);

	return 0;
}	
