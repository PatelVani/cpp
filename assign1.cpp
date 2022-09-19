#include<iostream>
using namespace std;
class bank_account
{
	public:
	string name_of_the_depositer="vani";
	int account_no=12342534;
	string type_of_account="savings";
	 	float balance=32327.67;

	 void enter()
	 {
	 	cout<<name_of_the_depositer<<endl;
	 	cout<<account_no<<endl;
	 	cout<<type_of_account<<endl;
	 	cout<<balance<<endl;	
	 }
	 void amount(int a)
	 {
	 	
	 	cout<<"total_balance="<<balance+a<<endl;
	 }
	 void check()
	 {
	 	
	 }
 };
 int main()
 {
 	bank_account v;
 	
 	v.enter();
 	cin>>bank_account.v::amount();
 	
 	return 0;
 }
