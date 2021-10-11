#include<stdio.h>
int main()
{
	int tel,eng,mat,sci,soc,total;
	float per;
		scanf("%d%d%d%d%d",&tel,&eng,&mat,&sci,&soc);
		total=tel+eng+mat+sci+soc;
		per=total*100/500;
		
printf("per=%f",per);
if(per>=90)
{

	printf("a grade");
	
}
else if (per>=80 && per<=90)
{
	printf("b grade");
}
else if(per>=60 && per<=80)
{
	printf("c grade");
}
else if (per>60 && per<=70)
{
	printf("d grade");
}
else if (per>=50 && per<=60)
{
	printf("e grade");
	
}
else 
{
	printf("fail");
	


}
}

