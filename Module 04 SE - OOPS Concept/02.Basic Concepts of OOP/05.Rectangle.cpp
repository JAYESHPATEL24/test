/* C++ program to create a class called Rectangle that has private 
member variables for length and width. Implement member functions to 
calculate the rectangle's area and perimeter. */

#include<iostream>
using namespace std;

class Rectangle{
	
	private:
		//data members
	int l;			//for length
	int w;			//for width
	
	public:
		
				//member functions
	set(int a,int b)	//for set values
	{
		l = a;
		w = b;
	}
	
	area()				//function for find area
	{
		cout<<"Area of Rectangle      : "<<l*w<<endl;
	}
	
	perimeter()			//function for find perimeter
	{
		cout<<"perimeter of Rectangle : "<<2*(l+w)<<endl;
	}
};

main()
{
	Rectangle r; //object creation
	int x,y;
					//two numbers from user.
	cout<<"Enter Number A : ";
	cin>>x;
	cout<<"Enter Number B : ";
	cin>>y;
	
	r.set(x,y);		//set the values using member function
	
		// call the member functions for find area and perimeter.
	r.area();
	r.perimeter();
}


