#include<stdio.h>
#include<conio.h>
int main()
{
	int m1[100][100],m2[100][100],r1,c1,r2,c2,product[100][100];
	printf("R1: ");
	scanf("%d",&r1);
	printf("\nC1: ");
	scanf("%d",&c1);
	printf("\nR2: ");
	scanf("%d",&r2);
	printf("\nC2: ");
	scanf("%d",&c2);
	if(c1!=r2)
	printf("\nMultiplication not possible.");
	else
	{
		printf("\nMatrix 1: ");
		for(int i=1;i<=r1;i++)
		{
			for(int j=1;j<=c1;j++)
			{
				scanf("%d",&m1[i][j]);
			}
		}
		printf("\nMatrix 2: ");
		for(int i=1;i<=r2;i++)
		{
			for(int j=1;j<=c2;j++)
			{
				scanf("%d",&m2[i][j]);
			}
		}
		int r=r2;
		int c=c1;
		for(int i=1;i<=r;i++)
		{
			for(int j=1;j<=c;j++)
			{
				product[i][j]=0;
				for(int k=1;k<=c;k++)
				{
					product[i][j]+=m1[i][k]*m2[k][j];
				}
			}
		}
		printf("\nProduct is : \n");
		for(int i=1;i<=r;i++)
		{
			for(int j=1;j<=c;j++)
			{
				printf("%d",product[i][j]);
				printf("\t");
			}
			printf("\n");
		}
	}
	return 0;
}
