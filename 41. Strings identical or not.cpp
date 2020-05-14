#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	string s1,s2;
	int flag=0;
	getline(cin,s1);
	getline(cin,s2);
	for(int i=0;i<s1.length();i++)
	{
		if(s1[i]!=s2[i])
		flag=1;
	}
	if(flag==0)
	cout<<"Strings are identical";
	else
	cout<<"Strings are not identical";
	return 0;
}
