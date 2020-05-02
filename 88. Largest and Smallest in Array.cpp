#include<iostream>
using namespace std;
int main()
{
	int a[100],n,max,min;
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>a[i];
	max=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]>max)
		max=a[i];
	}
	cout<<"Largest: "<<max<<endl;
	min=a[0];
	for(int i=0;i<n;i++)
	{
		if(a[i]<min)
		min=a[i];
	}
	cout<<"Smallest: "<<min;
	return 0;
}
