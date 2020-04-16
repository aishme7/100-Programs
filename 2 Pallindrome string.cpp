#include<iostream>
using namespace std;
int main()
{
	string s;
	cin>>s;
	int n=s.length() , flag=0;
	for(int i=0;i<n;i++)
	{
		if(s[i]==s[n-i-1])
		flag=1;
		else
		flag=0;
	}
	if (flag==1)
	cout<<"Yes";
	else 
	cout<<"No";
	return 0;
}
