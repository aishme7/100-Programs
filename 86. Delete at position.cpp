#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],n,pos;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	scanf("%d",&pos);
	for(int i=pos-1;i<n;i++)
	{
		a[i]=a[i+1];	
	}
	n=n-1;
	
	for(int i=0;i<n;i++)
	printf("%d\t",a[i]);
	return 0;
}
/*
5
2	
8	
10	
20	
16
3
*/
