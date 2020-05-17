#include<iostream>
using namespace std;
#define max 100
int rlinearsearch(int myarr[],int i,int n,int x)
{
	if(n<=i)
	return -1;
	else if(myarr[i]==x)
	return i+1;
	else 
	rlinearsearch(myarr,i+1,n,x);
}
int main()
{
	int arr[max],n,item,j,output;
	cout<<"\nEnter no of elements: ";
	cin>>n;
	for(int i=0;i<n;i++)
	cin>>arr[i];
	cout<<"\nEnter element to be searched: ";
	cin>>item;
	output=rlinearsearch(arr,j,n,item);
	if(output==-1)
	cout<<"\nElement not found. ";
	else
	cout<<"\nElement found at: "<<output;
	return 0;
}
