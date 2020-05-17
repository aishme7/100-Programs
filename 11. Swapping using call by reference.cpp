//we donot create a new memory location
//we are creating a new variable to the same memory location
#include<iostream>
using namespace std;
//call by reference
void swap(int &x,int &y)       
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a=7,b=26;
	cout<<"Before swapping: "<<"a= "<<a<<" b= "<<b;
	swap(a,b);
	cout<<"\nAfter swapping: "<<"a= "<<a<<" b= "<<b;
	return 0;
}
