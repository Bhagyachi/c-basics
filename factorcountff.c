#include<stdio.h>
int factorcount(int);
int main()
{
	int n,res;
	scanf("%d",&n);
	res=factorcount(n);
	printf("%d",res);
}
int factorcount(int n)
{
	int i,fact=0;
	for(i=1;i<=n;i++)
	{
	if(n%i==0)
	{
		fact++;
	}
}

	return fact;
}
