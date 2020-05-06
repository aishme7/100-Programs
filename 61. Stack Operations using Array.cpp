#include<iostream>
using namespace std;
int main()
{
	int stk[100],n,top=-1,ch,item,temp,more;
	cout<<"\nNo. of elements: ";
	cin>>n;
	
	do{
	cout<<"\n1 for push and 2 for pop";
	cin>>ch;
	switch(ch)
	{
		case 1: 
		if(top==n-1)
		cout<<"\nStack overflow";
		else
		{
			cout<<"\nEnter Element to be inserted";
			cin>>item;
			stk[++top]=item;	
		}	
		break;
		case 2:
			if(top==-1)
			cout<<"\nStack Underflow";
			else
			{
				temp=stk[top];
				top--;
			}
		break;	
	}
	cout<<"\nPress 0 for more push or pop operations: \n";
	cin>>more;
	}while(more==0);
	for(int i=0;i<=top;i++)
	cout<<stk[i]<<endl;	
	return 0;
}
