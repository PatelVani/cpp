#include<iostream>
using namespace std;
class A
{
   public:
   void setvalue()
   {
   	 cout<<"A"<<endl;
   }
};
class B : public A
{
   public:
   void setvalue()
   {
   	 cout<<"B"<<endl;
	   }	
};
class C : public B
{
    public:
	void setvalue()
	{
		cout<<"C"<<endl;
		}	
};
int main()
{    C obj;
     obj.setvalue();
     obj.A::setvalue();
     obj.B::setvalue();
	return 0;
}