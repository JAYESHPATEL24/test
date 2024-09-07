/*C++ program to implement a class called Student that has private 
member variables for name, class, roll number, and marks. Include 
member functions to calculate the grade based on the marks and display 
the student's information. Accept address from each student implement 
using of aggregation*/

#include<iostream>
using namespace std ;

class Address{
	
			//data members
	private:
		string room_no;
		string society;
		string Area;
		string city;
		string state;
		int pincode;
	
			//member functions
	public:
		Address(string a, string b, string c, string d, string e, int f)     //constructor
		{
			room_no = a;
			society = b;
			Area = c;
			city = d;
			state = e;
			pincode = f;
		}
		
		Display()   		 //function for display address.
		{
			cout<<"ADDRESS : "<<room_no<<", "<<society<<", "<<Area<<", "<<city<<", "<<state<<", "<<pincode;
		}
		
};

class Student{
			//Data members
	private:
		string name;
		int standard ;
		int rollno;
		int marks;
		string grade;
		Address* add;				//Aggregation
		
			//Member functions
	public:
		
		setdata(string n, int a, int b, int c,Address* z)		//function for set data members.
		{
			name = n;
			standard  = a;
			rollno = b;
			marks = c;
			add = z;
		}
		
		findgrade()						//function for find grade.
		{
			if(marks>100)
			{
				cout<<"Invalid Marks.....";	
			}
			else
			{
				if(marks>90)
				{
				 	grade = "A";
				}
				else if(marks>80)
				{
					grade = "B";
				}
				else if(marks>70)
				{
					grade = "C";
				}
				else if(marks>32)
				{
					grade = "D";
				}
				else
				{
					grade = "FAIL...NEVER GIVE UP...";
				}
			}
		}
		
		display()					//function for display information
		{
			cout<<endl<<"STUDENT DETAILS : "<<endl;
			cout<<"Name    : "<<name<<endl;
			add->Display();
			cout<<endl<<"Class   : "<<standard <<endl;
			cout<<"Roll No : "<<rollno<<endl;
			cout<<"Marks   : "<<marks<<endl;
			cout<<"Grade   : "<<grade<<endl;
		}	
};

main()
{
				//user input
	string n,r,s,a,c,st;
	int pin,x,rn,m;
	
	cout<<"Enter Student's name       : ";
	getline(cin,n); 
	cout<<"Enter Student's address    : "<<endl;
	cout<<"Room No : ";
	getline(cin,r); 
	cout<<"society : ";
	getline(cin,s);
	cout<<"Area    : ";
	getline(cin,a);
	cout<<"city    : ";
	getline(cin,c);
	cout<<"state   : ";
	getline(cin,st);
	cout<<"pincode : ";
	cin>>pin;	
	cout<<"Enter Student's class       : ";
	cin>>x;
	cout<<"Enter Student's Roll No     : ";
	cin>>rn;
	cout<<"Enter Student's Total Marks : ";
	cin>>m;
	
					//object creation
	Address ad(r,s,a,c,st,pin);
	Student stu;
	
					//call member functions
	stu.setdata(n,x,rn,m,&ad);			 //set the data members of student class
	stu.findgrade();				   	 //find grade.
	stu.display();						 //display the information.	
}


