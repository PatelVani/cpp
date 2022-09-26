#include<iostream>
using namespace std;

class A
{
    public:
	void test()
	{
		cout<<"A"<<endl;
	}
	void test(int x)
	{
		cout<<"B"<<endl;
	}
	void test(double y)
	{
		cout<<"C"<<endl;
	}
	void test(string a)
	{
		cout<<"D"<<endl;
	}
		
};
int main()
{
	A obj;
	obj.test();
	obj.test(12);
	obj.test(23.45);
	obj.test("name");
	return 0;
}