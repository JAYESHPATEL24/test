/*C++ Program to find Area of Rectangle using inheritance */

#include<iostream>
using namespace std;

class Rectangle			// parent class
{
	protected:
		
	int l,b;			//data members
	
	public:
	data()				//member function of parent class
	{
		cout<<"Enter Length of Rectangle : ";
		cin>>l;			//user input
		cout<<"Enter Width of Rectangle  : ";
		cin>>b;			//user input
	}
};

class Area : public Rectangle		//Child Class
{
	public:
	rectArea()			//member function of Child class
	{
		return l*b;			//formula for area of Rectangle
	}
};

main()
{
	Area a;				//object Creation
	a.data();			//calling parent class function
	cout<<"Area Of Rectangle : "<<a.rectArea(); //child class Function call
}


