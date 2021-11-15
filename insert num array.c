#include<stdio.h>
void main()
{
	int a[5],i,n,pos,elem;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)	
	{
	printf("a[%d]=%d",i,a[i]);
	}
	printf("enter the pos");
	scanf("%d",&pos);
	printf("enter the elem to insert in the array");
	scanf("%d",& elem);
	for(i=n-1;i>=pos;i--)
	{
	a[i+1]=a[i];
	}
	 a[pos]=elem;
    n++;
	for(i=0;i<n;i++)
	{
	printf("a[%d]=%d\n",i,a[i]);
}
}


