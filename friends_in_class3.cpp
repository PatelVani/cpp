#include<iostream>
using namespace std;
class A
{
    public:
    	int a=500;
	void getA()
	{
		cout<<"value of A = "<<a<<endl;
		}	
		friend class B;
		friend class C;
};
class B
{
	public:
		void getB(A r1)
		{
			cout<<"value of B = "<<r1.a/2<<endl;
		}
};
class C
{
	public:
		void getC(A r2)
		{
			cout<<"value of C = "<<r2.a/2<<endl;
		}
};
int main()
{
	A obj;
	obj.getA();
	B obj1;
	C obj2;
	obj1.getB(obj);
	obj2.getC(obj);
	return 0;
}
