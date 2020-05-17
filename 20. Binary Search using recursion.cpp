#include<iostream>
using namespace std;
int binarysearch(int myarr[],int left,int right,int x);
int main()
{
	int arr[10],item,output;
	for(int i=0;i<10;i++)
	cin>>arr[i];
	cout<<"Enter item to search: ";
	cin>>item;
	output=binarysearch(arr,0,9,item);
	if(output==-1)
	cout<<"\nItem not found";
	else
	cout<<"\nItem found at: "<<output;
	return 0;
}
int binarysearch(int myarr[],int left,int right,int x)
{
	
	while(left<=right)
	{
		int mid=(left+right)/2;
		if(myarr[mid]==x)
		return mid+1;
		else if(myarr[mid]<x)
		left=mid+1;
		else 
		right=mid-1;
	}
	return -1;
}
