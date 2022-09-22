#include<iostream>
using namespace std;


class bank
{
	protected:
	int account_no;
	int atmpin;
	float balance;
	
	public:
	string bankname;

		bank()
	{
		string bankname;
		int account_no;
	cout<<"enter your bank name "<<endl;
	cin>>bankname;
	cout<<"your bankname is = "<<bankname<<endl;
	cout<<"enter your account no:"<<endl;
	cin>>account_no;
	cout<<"your account_no is = "<<account_no<<endl;
	cout<<"your account balance is 12,56,546."<<endl; 
	cout<<"enter your atmpin:"<<endl;
	cin>>atmpin;
	cout<<"your atmpin is = "<<atmpin<<endl;
	cout<<"Have a nice day...!"<<endl;	
	};
};

class holder: public bank
{
    public:
     
    holder()
    {
        	cout<<"Thank You...!!!";
	};
		
};

int main()
{
	holder obj;
	
	return 0;
}