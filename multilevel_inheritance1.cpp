#include<iostream>
using namespace std;
class A
{
	public:
	void elec()
	{
		cout<<"This is a computer."<<endl;
	}
};
class B:public A
{
	public:
	void elec1()
	{
		cout<<"This is a smart phone. "<<endl;
	}
};
class C:public B
{
	public:
		void elec2()
		{
			cout<<"This is a smart watch."<<endl;
		}
	
};
int main()
{
	C obj;
	obj.elec();
	obj.elec1();
	obj.elec2();
	return 0;
}