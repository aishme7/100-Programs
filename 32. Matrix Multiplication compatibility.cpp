#include<stdio.h>
#include<conio.h>
int main()
{
	int r1,r2,c1,c2;
	printf("\nNo. of Rows in M1: ");
	scanf("%d",&r1);
	printf("\nNo. of columns in M1: ");
	scanf("%d",&c1);
	printf("\nNo. of Rows in M2: ");
	scanf("%d",&r2);
	printf("\nNo. of columns in M2: ");
	scanf("%d",&c2);
	if(c1==r2)
	printf("\nMatrix of %d*%d is possible.",r1,c2);
	else
	printf("\nMatrix is not possible.");
	return 0;
}
