#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],r,c,sum=0;
	scanf("%d",&r);
	scanf("%d",&c);
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			printf("Enter element at a%d%d  :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(i==j)
			sum+=a[i][j];
			else
			continue;
		}
	}
	printf("%d",sum);
	return 0;
}
