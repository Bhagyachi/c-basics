#include<stdio.h>
int main()
{
	int n,i,r,ec=0,oc=0,dc;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==0)
		{
		ec=ec+1;	
		}
		else
		{
			oc=oc+1;
		}
		dc=dc+1;
		n=n/10;
}
if(dc==ec)
{
	printf("strong ec");
}
else if(dc==oc)
{
	printf("strong oc");
}
else
{
	printf("mixed number");
}
}
