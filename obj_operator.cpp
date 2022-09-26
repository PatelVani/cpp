#include<iostream>
using namespace std;
class A 
{
   public:
   	int value;
   void test(int v)
   {
   	value=v;
	}	
	A operator + (A x)
	{
		x.value=value+x.value;
	}
	void get()
	{
		cout<<value<<endl;
	}
};
int main()
{
	A obj,obj1,obj2;
	obj.test(45);
	obj1.test(56);
	obj2=obj+obj1;
	obj2.get();
	return 0;
}