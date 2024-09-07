/*C++ program to create a class called Car that has private 
member variables for company, model, and year. Implement member 
functions to get and set these variables. */

#include<iostream>
using namespace std;

class Car{
	
	private:
			//data members
		string company;
		string model;
		int year;
		
	public:
				//member functions for set the values.
		setcompany(string a)
		{
			company = a;
		}
		
		setmodel(string b)
		{
			model = b;
		}
		
		setyear(int y)
		{
			year = y;
		}
				
				// member functions for get values.
		string getcompany()
		{
			return company;
		}
		
		string getmodel()
		{
			return model;
		}
		
		getyear()
		{
			return year;
		}
};

main()
{
	Car c;   //object ceration
	string x,y;
	int z;
	
			//user inputs
	cout<<"Enter Car's Company Name : ";
	cin>>x;
	cout<<"Enter Car's Model Name   : ";
	cin>>y;
	cout<<"Enter year : ";
	cin>>z;
	
		//set the values using set mumber functions
	c.setcompany(x);
	c.setmodel(y);
	c.setyear(z);
	
		//get values using get function and display the values.
	cout<<"-----Car Deatails-----"<<endl;
	cout<<"Company : "<<c.getcompany()<<endl;
	cout<<"Model   : "<<c.getmodel()<<endl;
	cout<<"year    : "<<c.getyear()<<endl; 
}
