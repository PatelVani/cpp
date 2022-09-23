#include<iostream>
using namespace std;
class riya
{
    public:
	int a=200;
	riya()
	{
	 cout<<"riya has $200"<<endl;	
	};
	friend void jiya(riya r1);
	friend void miya(riya r2);
};
void miya(riya r2)
{
	cout<<"miya got $"<<r2.a/2<<endl;
}
void jiya(riya r1)
	{
		cout<<"jiya got $"<<r1.a/2<<endl;
	}	
int main()
{
	riya obj;
	jiya(obj);
	miya(obj);
	return 0;
}