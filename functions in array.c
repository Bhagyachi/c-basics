#include<stdio.h>
main()
{
	int a[100],i,n;
	scanf("%d",&n);
	readarray(a,n);
	printarray(a,n);
}
readarray(int a[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		}	
}
printarray(int a[100],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
