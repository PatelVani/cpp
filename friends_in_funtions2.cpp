#include<iostream>
using namespace std;
class A
{
    public:
	int a=100;
	friend void get(A r1);
};
class B
{
    public:
	int b=500;
	friend void get(B r2);	
};
void get(A r1,B r2)
	{
		cout<<r1.a+r2.b<<endl;
	}	
int main()
{
	A obj;
	B obj1;
	get(obj,obj1);
	return 0;
}