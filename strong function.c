#include<stdio.h>
int strong(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=strong(n);
	printf("%d",res);
	if(n==res)
	{
		printf("strong num");
	}
	else
	{
		printf("not strong");
	}
}
int strong(int n)
{
	int i,r,fact=1,sum;
	while(n!=0)
	{
		r=n%10;
		i=1;
		fact=1;
		while(i<=r)
		{
			fact=fact*i;
			i++;
		}
		sum=sum+fact;
		n=n/10;
		}
		return sum;
	}

