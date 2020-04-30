#include<stdio.h>
#include<conio.h>     //2 5 3 2 5 10 3
int main()
{
	int a[100],size;
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	scanf("%d",&a[i]);
	for(int i=0;i<size;i++)
	{
		for(int j=i+1;j<size;j++)
		{
			if(a[i]==a[j])
			{
				a[j]=a[j+1];
				size=size-1;
				
			}
		}
	printf("%d",a[i]);
	}
	
	return 0;
}
