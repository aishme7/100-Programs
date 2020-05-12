#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100][100],trans[100][100],r,c,flag=0;
	scanf("%d",&r);
	scanf("%d",&c);
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=1;i<=c;i++)
	{
		for(int j=1;j<=r;j++)
		{
			trans[i][j]=a[j][i];
		}
	}
	for(int i=1;i<=r;i++)
	{
		for(int j=1;j<=c;j++)
		{
			if(a[i][j]!=trans[i][j])
			flag=1;
		}
	}
	if(flag==0)
	printf("Symmetric matrix");
	else
	printf("Non Symmetric matrix");
	
	
	
	return 0;
}
