#include<stdio.h>
#include<conio.h>
int main()
{
	int a[100],size,min,secmin;
	scanf("%d",&size);
	for (int i=0;i<size;i++)
	scanf("%d",&a[i]);
	if (a[0]<a[1])
	{
		min=a[0];
		secmin=a[1];
	}	
	else 
	{
		min=a[1];
		secmin=a[0];
	}
	for(int i=2;i<size;i++)
	{
		if(a[i]<min)
		{
			secmin=min;
			min=a[i];
		}
		else if(a[i]<secmin && a[i]!=min)
		secmin=a[i];
		
	}
	printf("%d",secmin);
	return 0;
}
