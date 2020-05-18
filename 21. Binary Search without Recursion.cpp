#include<iostream>
using namespace std;
int main()
{
	int a[100],n,item,mid,f,l;
	cout<<"Enter no. of elements: ";
	cin>>n;
	cout<<"\nEnter elements: ";
	for(int i=0;i<n;i++)
	cin>>a[i];
	cout<<"\nEnter item : ";
	cin>>item;
	f=0;
	l=n-1;
	while(l>=f)
	{
		mid=(f+l)/2;
		if(a[mid]==item)
		return mid+1;
		else if(a[mid]>item)
		l=mid-1;
		else if(a[mid]<item)
		f=mid+1;
		else
		return -1;
	}
	
}
	

