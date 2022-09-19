#include<iostream>
using namespace std;
class A 
{
 	public:
 	int x;
	void scope(int a)
	{
		x=a;
		cout<<x<<endl;
	}
		
};

int main()
{
	A b;
	b.A::scope(45);++
	return 0;
} 
