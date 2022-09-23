#include<iostream>
using namespace std;
class A
{
   protected:
   int a;
   public:
   void getA()
   {
      cout<<"$"<<endl;	
   }	
};
class B:virtual public A
{
	public:
	int b;
	void getB()
	{
		cout<<"&"<<endl;
	}
};
class C:virtual public A
{ 
    public:
    	int c;
    	void getC()
    	{
    		cout<<"%"<<endl;
		}
	
};
class D:public B,public C
{
	public :
		int d;
		void getD()
		{
			cout<<"#"<<endl;
		}
};
int main()
{
	D obj;
	obj.getA();
	obj.getB();
	obj.getC();
	obj.getD();
	return 0;
}