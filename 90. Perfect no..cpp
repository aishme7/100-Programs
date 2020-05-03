#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n,fact=0;
	scanf("%d",&n);
	num=n;
	for(int i=1;i<num;i++)
	{
		if(num%i==0)
		{
			fact=fact+i;
				
		}
	}
	if(n==fact)
	printf("Perfect no.");
	else
	printf("Not a Perfect no.");
	return 0;
}
