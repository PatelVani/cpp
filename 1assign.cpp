#include<iostream>
using namespace std;
class bank_account
{
	public:
	
	 bank_account()
	 {
	    string depositer;
	int account_no;
	string type_of_account;
	float balance;
	cout<<"enter the name of the depositer : "<<endl;
	cin>>depositer;
	cout<<"the depositer is = "<<depositer<<endl;
	 	cout<<"Enter the account number : "<<endl;
	 	cin>>account_no;
	 	cout<<"Your account number is = "<<account_no<<endl;
	 	cout<<"Enter the type of account : "<<endl;
	 	cin>>type_of_account;
	 	cout<<"your account type is = "<<type_of_account<<endl;
	 	cout<<"Balance=34,56,768"<<endl;	
	 };
	  void data()
	 {
	 	int choice,amt;
	 	cout<<"Do you want to deposite an amount?\n If yes then enter 0 and if no then enter 1"<<endl;
	 	cin>>choice;
	 	switch(choice)
	 	{
	 		case 0: cout<<"enter the amount you want to deposite : "<<endl;
	 		        cin>>amt;
	 		        cout<<"the total amount in your account is = "<<amt+3456768<<endl;
	 		case 1:cout<<"Thank you!!!"<<endl;
		 }
	
       void data1()
	 {
	 	
	 	int choice1,amt1;
	 	cout<<"Do you want to withdraw an amount?\n If yes then enter 0 and if no then enter 1"<<endl;
	 	cin>>choice1;
	 	switch(choice1)
	 	{
	 		case 0: cout<<"enter the amount you want to withdraw : "<<endl;
	 		        cin>>amt1;
	 		        cout<<"the total amount in your account is = "<<3456768-amt1<<endl;
	 		case 1:cout<<"Thank you!!!"<<endl;
		 }
	 }
	 
 };
 int main()
 {
 	bank_account v;
 	v.data();
 	v.data1();
 	return 0;
}
