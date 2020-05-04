#include<stdio.h>
#include<conio.h>
int main()
{
	int r,c,a[100][100],lmat[100][100];
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
			if(i>=j)
			{
				lmat[i][j]=a[i][j];
			}
			else 
			{
				lmat[i][j]=0;
			}
		}
		
	}
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(r>=c)
			{
				printf("%d\t",lmat[i][j]);
			}
		}
		printf("\n");
	}
}
else
	printf("Matrix should be a Square Matrix");
	return 0;
}

