#include<iostream>
using namespace std;
int main()
{
	int a;
	cout<<"Enter any integer value: "<<endl;
	cin>>a;
	cout<<a<<endl;
	if(a%2==0)
	{
		cout<<"EVEN "<<endl;
	}
	else
	{
		cout<<"ODD"<<endl;
	}
	return 0;
}