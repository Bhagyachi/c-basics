#include<stdio.h>
int main()
{
	int n,s,i;
	printf("enter the tablr requried");
	scanf("%d",&n);
	printf("enter the no of steps requried");
	scanf("%d",&s);
	for(i=1;i<=s;i++)
	{
		printf("%d*%d=%d\n",n,i,n*i);
	}
}
