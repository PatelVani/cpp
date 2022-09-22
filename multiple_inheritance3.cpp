#include<iostream>
using namespace std;
class A
{
	protected:
	int id;
	public:
	A()
	{
		cout<<"Enter the id of Sanjay : "<<endl;
		cin>>id;
		cout<<"The id of Sanjay is = "<<id<<endl;
	};
};
class B
{
    protected:
	int id1;
	public:
	 B()
	{
		cout<<"Enter the id of Dipti : "<<endl;
		cin>>id1;
		cout<<"The id of Dipti is = "<<id1<<endl;
	};	
};
class C:public A,public B
{
	protected:
	int id2;
	public:
	 C()
	{
		cout<<"Enter the id of Vani : "<<endl;
		cin>>id2;
		cout<<"The id of Vani is = "<<id2<<endl;
	};	
};
int main()
{
	C obj;
	
	return 0;
}