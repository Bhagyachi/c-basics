#include<stdio.h>
int main()
{
	int num,r,sq,sum=0;
	scanf("%d",&num);
	sq=num*num;
	while(sq!=0)
{
	r=sq%10;
sum=sum+r;
		
		sq=sq/10;
}
if(sum==num)
{
	printf("spy num");
}
else
{
	printf("not spy num");
}
}
