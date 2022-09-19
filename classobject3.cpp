#include<iostream>
using namespace std;
class person 
{
 	public:
 	int age;
	void Age(int a)
	{
		age=a;
		cout<<age<<endl;
	}
		
};

int main()
{
	person p;
	p.Age(67);
	return 0;
}
