#include<stdio.h>
int reverse(int);
int main()
{
	int n,r,res;
	scanf("%d",&n);
	res=reverse(n);
	printf("%d",res);
}
int reverse(int n)
{
	int r,sum;
	while(n!=0)
	{
	r=n%10;
sum=sum*10+r;
	n=n/10;
}
return sum;
}
