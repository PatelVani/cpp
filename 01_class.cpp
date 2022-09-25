#include<iostream>
using namespace std;
class calculation
{
		public:
		int a,b,c,d,e,f;
		 calculation()
		{
			 cout<<"enter a and b:\n";
	         cin>>a>>b;
			 c=a*b;
			 d=a/b;
			 e=a+b;
			 f=a-b;
			cout<<"multi = "<<c<<endl;
			cout<<"div = "<<d<<endl;
			cout<<"add = "<<e<<endl;
			cout<<"sub = "<<f<<endl;
		};
		
};
int main()
{   
    calculation obj;
	
	return 0;
}