#include<stdio.h>
int perfect(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=perfect(n);
	printf("%d",res);
	if(n==res)
	{
		printf("perfect num");
	}
	else
	{
		printf("not perfect num");
	}
}
int perfect(int n)
{
	int i,sum=0;
	for(i=1;i<n;i++)
	{
		if(n%i==0)
		{
			sum=sum+i;	
		}
	}
		return sum;
}
