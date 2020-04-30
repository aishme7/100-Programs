#include<stdio.h>
#include<conio.h>
int main()
{
	int a[1000],size,max,secmax;
	scanf("%d",&size);
	for(int i=0;i<size;i++)
	scanf("%d",&a[i]);
	if(a[0]>a[1])
	{
		max=a[0];
		secmax=a[1];
	}
	else
	{
		max=a[0];
		secmax=a[1];
	}
	for(int i=2;i<size;i++)
	{
		if(a[i]>max)
		{
			secmax=max;
			max=a[i];
		}
		else if (a[i]>secmax && a[i]!=max)
		a[i]=secmax;
	}
	printf("%d",secmax);
	
	return 0;
}
