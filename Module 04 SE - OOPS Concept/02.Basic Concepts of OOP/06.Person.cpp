/*C++ program to create a class called Person that has private 
member variables for name, age and country. Implement member 
functions to set and get the values of these variables.*/

#include<iostream>
using namespace std;

class Person{			
	
	private:
				//data members
	string name;
	int age;
	string country;
	
	public:
				//member function for set values
	setname(string n)
	{
		name = n;	
	}
	
	setage(int a)
	{
		age = a;
	}
	
	setcountry(string c)
	{
		country = c;
	}
			
					//member functions for get values.
	string getname()
	{
		return name; 
	}
	
	getage()
	{
		return age;
	}
	
	string getcountry()
	{
		return country;
	}
};

main()
{
	Person p; //object creation
	string m, u;
	int e;
				//user inputs
	cout<<"Enter person's name         : ";
	getline(cin,m);
	cout<<"Enter person's age          : ";
	cin>>e;
	cin.ignore();
	cout<<"Enter person's country Name : ";
	getline(cin,u);
	
		// call member functions for set values
	p.setname(m); 
	p.setage(e);
	p.setcountry(u);
	
		//display & call member functions for get values
	cout<<endl<<endl;
	cout<<"Name         : "<<p.getname()<<endl;
	cout<<"age          : "<<p.getage()<<endl;
	cout<<"country name : "<<p.getcountry()<<endl;
}
