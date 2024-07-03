#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	printf("\n Enter the string : ");
	scanf("%s",s);
	int n=strlen(s),
	    count=0;

	for(int i=0;i<n;i++)
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
			continue;
		}
		else{
			count++;
		}
	}
	int ans=n-((count/2)+1)-2;
	printf("\n Numbers of ways : %d\n",ans);
	return 0;
}

