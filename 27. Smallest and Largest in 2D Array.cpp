#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],r,c;
	scanf("%d",&r);
	scanf("%d",&c);
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		scanf("%d",&a[i][j]);
	}
	int min= a[1][1];
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(min>a[i][j])
			min=a[i][j];
		}
	}
	printf("\nSmallest in 2D Array: %d",min);
	int max= a[1][1];
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(a[i][j]>max)
			max=a[i][j];
		}
	}
	printf("\nLargest in 2D Array: %d",max);
	
	return 0;
}
//2,00,00,00,00,00,000
