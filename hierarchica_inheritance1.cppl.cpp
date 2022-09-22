#include<iostream>
using namespace std;
class A
{
	public:
	A()
	{
		cout<<"This is my Grandfather."<<endl;
	};
};
class B: public A
{
	public:
		B()
		{
			cout<<"Thsi is my Father."<<endl;
		};
};
class C:public A
{
	public:
	C()
	{
		cout<<"Thsi is my Uncle."<<endl;
		};	
	
};
class D:public B
{
	public:
	D()
	{
		cout<<"Thsi is me(vani) ."<<endl;
	};
};
class E:public B
{
	public:
	E()
	{
		cout<<"Thsi is my brother ."<<endl;
	};
};
class F:public C
{
	public:
	F()
	{
		cout<<"Thsi is cousin no.1 "<<endl;
	};
};
class G:public C
{
	public:
	G()
	{
		cout<<"Thsi is cousin no.2 "<<endl;
	};
};
int main()
{
	D obj;
	E obj1;
	F obj2;
	G obj3;

	return 0;
}

