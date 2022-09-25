#include<iostream>
using namespace std;
class bank
{
    public:
	int atmpin;
	string name;
	int account_no;
	int balance;
	
		bank()
		{
			cout<<"enter your atmpin : ";
			cin>>atmpin;
			if(atmpin==1234)
			{
				cout<<"enter your name : ";
				cin>>name;
				cout<<"enter your account number : ";
				cin>>account_no;
				cout<<"your account balance is 50000."<<endl;
				int choice,amt;
				cout<<endl<<"Do you want to withdraw an amount OR deposite an amount?\n If withdraw then enter 0 and if deposite then enter 1"<<endl;
				cin>>choice;
				switch(choice)
				{
					case 0: cout<<"enter the amount you want to withdraw : "<<endl;
	 		        cin>>amt;
	 		        if(amt<=50000)
	 		        {
					 cout<<"the total amount in your account is = "<<50000-amt<<endl;
					 }
					 else 
					 {
					 	cout<<"Not possible!!!"<<endl;
					 	cout<<"You have only 50000 in your bank account"<<endl;
					 }
	 		        break;
	 		        case 1:cout<<"enter the amount you want to deposite : "<<endl;
	 		        cin>>amt;
	 		        if(amt>0)
	 		        {
					 cout<<"the total amount in your account is = "<<amt+50000<<endl;
					 }
					 else
					 {
					 	cout<<"Not possible!!!"<<endl;
					 	cout<<"You can only deposite an amount greater than 0 only."<<endl;
					 }
	 		        break;
						
				}
				
		    }
	 	
	   
			else
			{
				cout<<"you have entered the wrong atmpin";
			}
		};	 	
};
int main()
{
	bank obj;
	return 0;
}