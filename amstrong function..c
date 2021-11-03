#include<stdio.h>
int amstrong(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=amstrong(n);
	printf("%d",res);
	if(res==n)
	{
		printf("amstrong");
	}
	else
	{
		printf("not amstrong");
	}
}
int amstrong(int n)
{
	int r,sum=0;
	while(n!=0)
	{
		r=n%10;
		sum=sum+r*r*r;
		n=n/10;
	}
	return sum;
}
