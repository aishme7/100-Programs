#include<stdio.h>
#include<conio.h>
int main()
{
	int m,n,a[100][100],b[100][100],res[100][100];
	printf("No. of rows: ");
	scanf("%d",&m);
	printf("No. of columns: ");
	scanf("%d",&n);
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("Enter element at a%d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("Enter element at b%d%d: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			res[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("%d\t",res[i][j]);
			
		}
		printf("\n");
	}
	
	return 0;
}


/*
2
3
2
3
4
5
2
3
-4
5
3
5
6
3
*/
