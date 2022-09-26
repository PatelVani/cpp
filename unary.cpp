#include<iostream>
using namespace std;
class A
{
	public:
	int value;
	void test(int v)
	{
       value=++v;		
	}
	
	A operator ++()
	{
		value=value+0;
		return 0;
	}
	void getvalue()
	{
		cout<<value<<endl;
	}
};
int main()
{
	A obj;
	obj.test(12);
	++obj;
	obj.getvalue();
	return 0;
}