#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],m,n;
	scanf("%d",&m);
	scanf("%d",&n);
	for(int i=1;i<=m;i++)
	{
		for(int j=1;j<=n;j++)
		{
			printf("Enter element at a%d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=m;j++)
		{
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
	return 0;
}
/*
2
3
2
1
3
7
4
6
*/
