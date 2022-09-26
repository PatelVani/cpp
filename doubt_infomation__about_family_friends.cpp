#include<iostream>
using namespace std;
class members
{
    public:
    int num;
	string name;
	friend void num_of_members(members obj);
};
void num_of_members(members obj)
	{
		cout<<"enter the number of members in your family :  ";
		cin>>obj.num;
		cout<<"enter the name of members in your family :  ";
		for(int a=0;a<=obj.num;a++)
		{
			cin>>obj.name;
			
		}
	}	
int main()
{   members v;
    num_of_members(v);
	return 0;
}