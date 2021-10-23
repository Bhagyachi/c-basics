#include<stdio.h>
int main()
{
	int a,b,c,d;
	scanf("%d",&d);
	switch(d)
	{
		case 1:
			scanf("%d",&a);
			d=a*a;
			printf("%d",d);
			break;
		case 2:
			scanf("%d%d",&a,&b);
		d=a*b;
		printf("%d",d);
		break;
		case 3:
			scanf("%d%d",&a,&b);
		d=0.5*a*b;
		printf("%d",d);	
	}
	}
