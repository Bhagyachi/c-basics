#include<stdio.h>
int factorial(int);
int main()
{
	int n,result;
	scanf("%d",&n);
	result=factorial (n);
	printf("%d",result);
}
int factorial (int n)
{
	int i,factorial=1;
	for(i=1;i<=n;i++)
	{
		factorial=factorial*i;
	}
	return factorial;
}
