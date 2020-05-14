#include<iostream>
using namespace std;
int main()
{
	int m;
	cin>>m;
	if(m>=60)
	cout<<"Grade = FIRST";
	if(m>=50 && m<60)
	cout<<"Grade = SECOND";
	if(m>=40 && m<50)
	cout<<"Grade = THIRD";
	if(m<40)
	cout<<"Grade = FAILED";
	return 0;
}
