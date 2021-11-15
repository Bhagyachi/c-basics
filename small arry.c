#include<stdio.h>
void main()
{
	int a[10],i,n,sma,pos;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	sma=a[0];
	for(i=1;i<n;i++)
	{
		if(sma>a[i])
		{
			sma=a[i];
			pos=i;
		}
	}
	printf("sma num :%d",sma);
	printf("pos num:%d",pos);
}
