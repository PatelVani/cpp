#include<iostream>
using namespace std;

class name {
	private:
		int data;
	public:
    
    ~name()
    {
    	cout<<"hello"<<endl;
	}
};

int main()
{
	name x;
	return 0;
}

