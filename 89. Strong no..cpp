#include<stdio.h>
#include<conio.h>
int main()
{
	int n,num,strong,x=0,fact=1;
	scanf("%d",&n);
	num=n;
	while(num!=0)
	{
		x=num%10;
		num=num/10;
		for(int i=1;i<=x;i++)
		{
			fact*=i;
		}
		strong+=fact;
		fact=1;	
	}
	if(n==strong)
	printf("Strong Number");
	else
	printf("Not a Strong Number");
}
