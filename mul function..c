#include<stdio.h>
int mult(int,int);
int main()
{
	int a,b,sum;
	scanf("%d%d",&a,&b);
	sum=mult(a,b);
	printf("%d",sum);
}
		int mult(int a,int b)
	{
			int c;
			c=a*b;
		 return c;
		
	}

