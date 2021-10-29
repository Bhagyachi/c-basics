#include<stdio.h>
int factorcount(int);
int main()
{
	int num,d;
	scanf("%d",&num);
	d=factorcount(num);
	printf("num of factorcount:%d",d);
}
int factorcount(int num)
{
	int i,factorcount=0;
	for(i=1;i<=num;i++)
	{
		if(num%i==0)
		{
			factorcount++;
		}
	}
	return factorcount;
}

