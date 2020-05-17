#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	b=a+b;
	a=b-a;
	b=b-a;
	cout<<a<<"\t"<<b;
	return 0;
}
