#include<stdio.h>
int big(int,int);
int main()
{
	int a,b,res;
	scanf("%d%d",&a,&b);
	res=big(a,b);
	printf("big:%d",res);
}
int big(int a,int b)
{
	if(a>b)
{

return a;
}
else
{
	return b;

}
}
