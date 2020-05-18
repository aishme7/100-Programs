#include<iostream>
using namespace std;
int main()
{
	int yr;
	cin>>yr;
	if(yr%400==0 )
	cout<<"Leap Year.";
	else if(yr%4==0 && yr%100!=0)
	cout<<"Leap Year";
	else
	cout<<"Not a leap year";
	return 0;
}
