#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,nf=1,rf=1,nrf=1,ncr;
	scanf("%d",&n);
	scanf("%d",&r);
	int nr=n-r;
	//printf("n-r= %d\n",nr);
	for(int i=1;i<=n;i++)
	nf=nf*i;
	//printf("%d\n",nf);
	for(int i=1;i<=r;i++)
	rf=rf*i;
	//printf("%d\n",rf);
	for(int i=1;i<=nr;i++)
	nrf=nrf*i;
	//printf("%d\n",nrf);
	ncr=nf/(rf*nrf);
	printf("%d\n",ncr);
}
