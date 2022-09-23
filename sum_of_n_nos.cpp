#include<iostream>
using namespace std;
int main()
{
	int n,sum=0;
	cout<<"enter any value for n : ";
	cin>>n;
	for(int a=1;a<=n;a++)
	{
		sum=sum+n;
	}
	cout<<sum<<endl;
	return 0;
}