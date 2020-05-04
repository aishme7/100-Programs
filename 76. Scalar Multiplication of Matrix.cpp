#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],num,r,c;
	scanf("%d",&r);
	scanf("%d",&c);
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			printf("Enter element at a%d%d :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Enter No. to be multiplied: ");
	scanf("%d",&num);
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			printf("%d\t",num*a[i][j]);
		}
		printf("\n");
	}
}
