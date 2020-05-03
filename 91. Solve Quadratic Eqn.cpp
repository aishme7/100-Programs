#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a,b,c,r1,r2,des;
	cin>>a;
	cin>>b;
	cin>>c;
	des=b*b-4*a*c;
	r1=(-b+sqrt(des))/2*a;
	r2=(-b-sqrt(des))/2*a;
	cout<<r1<<"\n"<<r2;
	return 0;
}
