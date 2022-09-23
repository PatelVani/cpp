#include<iostream>
using namespace std;
class A
{
    public:
    	int a=300;
	void getA()
	{
		cout<<"value of A = "<<a<<endl;
		}	
		friend class C;
};
class B
{
	public:
		int b=400;
		void getB()
		{
			cout<<"value of B = "<<b<<endl;
		}
		friend class C;
};
class C
{
 public:
 void getC(A r1,B r2)
 {
 	cout<<"value of C = A+B ="<<r1.a+r2.b<<endl;
	 }	
};

int main()
{
	A obj;
	obj.getA();
	B obj1;
	obj1.getB();
	C obj2;
	obj2.getC(obj,obj1);
	return 0;
}
