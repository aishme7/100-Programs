#include<iostream>
using namespace std;
int main()
{
	int a[100],item,n,flag=0;
	cin>>n;    //size of array
	for(int i=0;i<n;i++)
	cin>>a[i];
	cin>>item; 
	for(int i=0;i<n;i++)
	{
		if(a[i]==item)
		{
			cout<<i+1;
			flag=1;
		}
		
	}
	if(flag==0)
	cout<<"Item not found" ;
}
