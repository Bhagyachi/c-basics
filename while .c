#include<stdio.h>
int main()
{
int a,b,t=2,res=1;
scanf("%d%d",&a,&b);
while(1)
{
	if(a%t==0 && b%t==0)
	{
	a=a/2;
	b=b/2;
	res=res*t;	
	}
	else 
	{
	
		t++;
	}
	if(a>t || b>t)
	{
		res=res*a*b;
		printf("lcm is :%d",res);
		break;
	}
}
}

