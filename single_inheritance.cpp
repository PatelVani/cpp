#include<iostream>
using namespace std;
class A
{
	protected:
	int a;
	float b;
	public:
	void f()
	{
		cout<<"hello";
	}
};
class B():: public A
{
	public:
	void g(int a)
	{
		cout<<"hi";
	}
}
int main()
{
	B obj;
	obj.g(56)
}
