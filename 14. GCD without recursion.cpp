#include<iostream>
using namespace std;
int main()
{
	int n1,n2,div,dsr,rem;
	cin>>n1>>n2;
	if(n1>n2)
	{
		div=n1;
	dsr=n2;
	rem=1;
	while(rem!=0)
	{
		rem=div%dsr;
		div=dsr;
		dsr=rem;
	}
	cout<<"\nGCD = "<<div;
	}
	else 
	{
	div=n2;
	dsr=n1;
	rem=1;
	while(rem!=0)
	{
		rem=div%dsr;
		div=dsr;
		dsr=rem;
	}
	cout<<"\nGCD = "<<div;
	}
	return 0;
}
