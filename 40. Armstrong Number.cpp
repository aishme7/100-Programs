#include<stdio.h>
#include<conio.h>
int main()
{
	int num,n,armstr=0,rem;
	scanf("%d",&num);
	n=num;
	while(n!=0)
	{
		rem=n%10;
		armstr+=rem*rem*rem;
		n=n/10;
	}
	if(num==armstr)
	printf("\nArmstrong number.");
	else
	printf("\nNot a Armstrong number.");
	return 0;
}
