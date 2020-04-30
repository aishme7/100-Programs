#include<stdio.h>
#include<conio.h>
#define max 100
int main()
{
	int a[max],n,large ;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	large=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>large)
		{
			large=a[i];
			
		}
	}
	printf("%d",large);
	return 0;
}
