#include <stdio.h>
int main()
{
	int phy, mat, eng,tot,chem;
	printf("Enter marks in order of Phy,mat,chem,eng:\n");
	scanf("%d%d%d%d",&phy,&mat,&chem,&eng);
	printf("Marks in Physics: %d\n",phy);
	printf("Marks in Maths: %d\n",mat);
	printf("Marks in Chemistry: %d\n",chem);
	printf("Marks in English: %d\n",eng);
	printf("Total Marks: %d\n",phy+mat+chem+eng);
	
	return 0;
}
