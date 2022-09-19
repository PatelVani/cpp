#include<iostream>
using namespace std;
class B
{
	public:
	B()
	{
		int a=435,b=23;
		cin>>a>>b;
		cout<<"ADDITION="<<a+b<<endl;
		cout<<"SUBTRACTION="<<a-b<<endl;
		cout<<"MULTIPLICATION="<<a*b<<endl;
		cout<<"DIVITION="<<a/b<<endl;
	}
	
};
int main()
{
	B v;
	return 0;
}
