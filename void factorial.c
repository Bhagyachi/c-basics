#include<stdio.h>
factorial(int n);
void main()
{
	int n,res;
	scanf("%d",&n);
	res=factorial(n);
}
factorial(int n)
{
	int i,fact=1;
	for(i=1;i<=n;i++)
	{
		fact=fact*i;
	}
	printf("%d",fact);
}
