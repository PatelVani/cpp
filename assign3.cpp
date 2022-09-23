#include<iostream>
using namespace std;
class person
{
	protected:
	string name;
	int age;
	
	person()
	{
		cout<<"enter name : ";
		cin>>name;
		
		cout<<"enter age : ";
		cin>>age;
		
	}
};
class student 
{
    protected:
	int percentage;
	student()
	{
		cout<<"enter percentage of the student : ";
		cin>>percentage;
		cout<<"%";
		
	}
};
class teacher : public person , public student 
{
	public :
	string name1;
	int salary;
	teacher()
	{
		cout<<"enter the name of the teacher : ";
		cin>>name1;
		cout<<"enter the salary of the teacher : ";
		cin>>salary;
		
	}
		
};
int main()
{
	teacher obj;
	return 0;
}