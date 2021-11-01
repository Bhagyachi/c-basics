#include<stdio.h>
int divi(int,int);
int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=divi(a,b);
	printf("%d",sum);
}
		int divi(int a,int b)
		{
			int c;
			c=a/b;
			return c;
		}
	

