#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,a[100][100],umat[100][100];
	scanf("%d",&r);
	scanf("%d",&c);
	if(r==c)
	{
	
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(i>j)
			umat[i][j]=0;
			else
			umat[i][j]=a[i][j];
		}
	}
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			printf("%d\t",umat[i][j]);
		}
		printf("\n");
	}
}
else
printf("Matrix should be a square matrix");
	return 0;
}
