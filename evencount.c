#include<stdio.h>
int main()
{
	int n,i,r,oddcount=0;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==1)
			{
				oddcount=oddcount+1;
			}
		n=n/10;
	}
	printf("%d",oddcount);
}
