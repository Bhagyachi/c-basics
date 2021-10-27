#include<stdio.h>
int main()
{
	int n,i,r,p,temp,sum=0;
	scanf("%d",&n);
	temp=n;
	while(n!=0)
{
	r=n%10;
	p=r*r*r;
	sum=sum+p;
	n=n/10;
	}	
	if(sum==temp)
	{
		printf("armstrong num");
	}
	else
	{
		printf("not armstrong num");
	}
}
