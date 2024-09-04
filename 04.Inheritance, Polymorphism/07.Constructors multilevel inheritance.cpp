/*C++ Program to illustrates the use of Constructors in multilevel inheritance */

#include<iostream>
using namespace std;

class A{
	
	public:
		
		A()				//constructor
		{
			cout<<"Class A"<<endl;		
		}
}; 

class B : public A{
	
	public:
		
		B()				//constructor
		{
			cout<<"Class B"<<endl;
		}
};

class C : public B{
	
	public:
		
		C()				//constructor
		{
			cout<<"Class C"<<endl;
		}
};

main()
{
	C ob;			//object creation
}


