#include<stdio.h>
int sumof (int );
int main()
{
	int n,res;
	scanf("%d",&n);
	res=sumof(n);
	printf("%d",res);
}
int sumof(int n)
{

		int i,sum=0;
		for(i=1;i<=n;i++)
		{
			sum=sum+i;
		}
		return sum;
	}

