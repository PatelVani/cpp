#include<iostream>
using namespace std;
class father
{
    public:
	float money,property,a;
	public:
		void getM()
		{
			cout<<"enter the amount of money father has = ";
			cin>>money;
			
		}
		void getP()
		{
			cout<<"enter the number of property father has = ";
			cin>>property;
			
		}
		
		friend class mother;
		friend class son;
		friend class daughter;
};
class mother
{
	public:
		void get(father r1)
		{
			cout<<" the amount of money mother has = "<<r1.money*50/100<<endl;
			cout<<" the number of property mother has = "<<r1.property*50/100<<endl;
		}
};
class son
{
	public:
		void gets(father r1)
		{
				cout<<" the amount of money son has = "<<r1.money*0<<endl;
			cout<<" the number of property son has = "<<r1.property*10/100<<endl;
		}
		
};
class daughter
{
	public:
		void getd(father r1)
		{
				cout<<" the amount of money daughter has = "<<r1.money*50/100<<endl;
			cout<<" the number of property daughter has = "<<r1.property*0<<endl;
		}
		
};
int main()
{
	father obj;
	obj.getM();
	obj.getP();
	mother obj1;
	obj1.get(obj);
	son obj2;
	obj2.gets(obj);
	daughter obj3;
	obj3.getd(obj);
	return 0;
}











