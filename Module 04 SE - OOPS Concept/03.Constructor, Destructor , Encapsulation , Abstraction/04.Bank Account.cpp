/*C++ program to implement a class called Bank Account that has 
private member variables for account number and balance. Include 
member functions to deposit and withdraw money from the account. */

#include<iostream>
using namespace std;

class Bank_Account{
	
	private:
				//Data members
		long long acno; 	//account number
		float balance;
		
				//member functions
	public:
		Bank_Account(long long a,float b)		//counstructor for intilize the data members.
		{
			acno = a;
			balance = b;
		}
		
		deposit()				//function for deposit the money.
		{
			float d;
			cout<<"Enter a deposit amount : Rs.";
			cin>>d;
			balance += d;
			cout<<"Deposit Successfully."<<endl;
			cout<<"Current Balance : Rs."<<balance<<endl<<endl;
		}
		
		withdraw()			//function for withdraw the money.
		{
			float w;
			cout<<"Enter withdraw amount : Rs.";
			cin>>w;
			
			if(w>balance)		//check balance availability
			{
				cout<<"Insufficient Balance"<<endl;
				cout<<"Current Balance : Rs."<<balance<<endl<<endl;
			}
			else
			{
				balance -= w;
				cout<<"Money Withdraw Successfully....."<<endl;
				cout<<"Current Balance : Rs."<<balance<<endl<<endl;
			}
		}
	
		display()				//function for display data
		{
			cout<<"Account Number : "<<acno<<endl;
			cout<<"Balance        : Rs."<<balance;
		}
};

main()
{	
				//user inputs
	long long account;
	float bal;
	
	cout<<"Enter Account Number : ";
	cin>>account;
	cout<<"Enter Balance        : Rs.";
	cin>>bal;
	cout<<endl<<endl;
	
	Bank_Account BA(account,bal); 		//object creation
	
				//call the member functions of class
	BA.deposit();
	BA.withdraw();
	BA.display();
}


