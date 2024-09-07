/*C++ program to implement a class called Circle that has private 
member variables for radius. Include member functions to calculate the 
circle's area and circumference. */

#include<iostream>
using namespace std;

class Circle		
{
	private:
		
	float radius;			//data member for radius
	
	public:
		
	set(float r)			//function for set value of private data member
	{
		radius = r;
	}	
	
	float area()  //member function for find area
	{
		return 3.14*radius*radius;
	}
	
	float circumference()	//member function for find circumference
	{
		return 2*3.14*radius;
	}
};


main()
{
	Circle c;				//create object of class
	
	float r;
	cout<<"Enter a radius of Circle : ";
	cin>>r;									//user input
	
	c.set(r);			//call member function for set the value
	
	cout<<endl<<endl<<"Area Of Circle          : "<<c.area()<<endl; 	//call member function 
	
	cout<<"Circumference of Circle : "<<c.circumference(); //call member function
}


