#include<iostream>
using namespace std;
class child
{
	private:
		string name;
		int roll_no;
	public:
		void input()
		{
			cout<<"enter your name:\n";
			cin>>name;
			cout<<"enter your roll no:\n";
			cin>>roll_no;
		}
	
};
class condition:public child
{
	private:
		int height,weight;
	public:
		void input1()
		{
			
			cout<<"enter height:\n";
			cin>>height;
			cout<<"enter weight:\n";
			cin>>weight;
		}
		
};
int main()
{
	condition v;
    v.input();
    v.input1();
    return 0;	
}