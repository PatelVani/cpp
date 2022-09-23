#include<iostream>
using namespace std;
class A
{
    public:
    	int a=300;
	void getA()
	{
		cout<<a<<endl;
		}	
		friend class B(A r1);
};
class B
{
	public:
		void getB(A r1)
		{
			cout<<r1.a<<endl;
		}
};
int main()
{
	A obj;
	B obj1;
	obj1.getB(obj);
	return 0;
}
