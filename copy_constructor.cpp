#include<iostream>
using namespace std;
class person
{
	private:
	int data;
	public:
	person(int d)
	{
		data=d;
		cout<<data<<endl;
	}
	
	person(person &obj321)
	{
		cout<<obj321.data;
	}
		
};
int main()
{
	person x(2345);
	person y(x);
	return 0;
}