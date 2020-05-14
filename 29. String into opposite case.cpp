#include<iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	for(int i=0;i<str.length();i++)
	{
		if(str[i]>=65 && str[i]<=90)
		str[i]=str[i]+32;
		else if(str[i]>=97 && str[i]<=122)
		str[i]=str[i]-32;
	}
	cout<<"\n"<<str;
	return 0;
}
