#include<iostream>
using namespace std;
class A
{
    public:
	int a=100;
	friend void getA(A ref);
};
void getA(A ref)
	{
		cout<<ref.a<<endl;
	}	
int main()
{
	A obj;
	getA(obj);
	return 0;
}