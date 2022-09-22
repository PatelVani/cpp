#include<iostream>
using namespace std;
class exam1
{
	protected:
	exam1()
	{
		cout<<"this is exam1. "<<endl;
	};
};
class exam2
{  
   protected:
   	exam2()
   	{
   		cout<<"this is exam2. "<<endl;
	   };
	
};
class student:public exam1,public exam2
{
	public:
		student()
		{
			cout<<"this is a student who had taken both the exams ."<<endl;
		};
};
int main()
{
	student v;
	
	return 0;
}