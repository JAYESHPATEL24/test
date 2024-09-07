/*C++ Program display Student Mark sheet using Multiple inheritance*/

#include<iostream>
using namespace std;

class School			//parent class			
{
	public:
	School()				//member function
	{
		cout<<"Welcome to our School."<<endl;
	}
	
};

class Student : public School //derived class 
{
	protected:
		 //Data Members		
	string name;
	int roll;
	
	public:
	Name()		//member function for user inputs
	{
		cout<<"Enter Student's Name : ";
		getline(cin,name);
		cout<<"Enter Roll number    : ";
		cin>>roll;
	}
};

class Marksheet : public Student  //derived class
{
	public:
	marks()				//member function for display marksheet
	{
	
		cout<<endl<<endl<<"Student's Name : "<<name;
		cout<<endl<<"Roll No        : "<<roll;
		cout<<endl<<endl<<"%%%% MArksheet %%%%%"<<endl;
		cout<<"Maths     :  60/ 70"<<endl;
		cout<<"Physics   :  55/ 70"<<endl;
		cout<<"Chemestry :  65/ 70"<<endl;
		cout<<"Total     : 180/210"<<endl;
		cout<<"Percentage: 85.71 %";
	}
};

main()
{
	
	Marksheet m;		//object creation
	
		//member functions call
	m.Name();
	m.marks();
}

