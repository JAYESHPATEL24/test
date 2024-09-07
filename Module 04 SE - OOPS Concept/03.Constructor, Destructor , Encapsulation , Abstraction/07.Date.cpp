/*C++ program to implement a class called Date that has private 
member variables for day, month, and year. Include member functions to 
set and get these variables, as well as to validate if the date is valid. */

#include<iostream>
using namespace std;

class Date{
			//Data members
	private:
		int day;
		int month;
		int year;
		
			//member functions
	public:
		
				//set the data member of class.
		setday(int a) 			
		{
			day = a;
		}
		setmonth(int b)
		{
			month = b;
		}
		setyear(int c)
		{
			year = c;
		}
		
		Checkvalidity()				//Check date is valid or not.
		{
			if((day>=1 && day<=31) && (month>=1 && month <=31))
			{
				if(month == 4 || month == 6 || month == 9 || month == 11)
				{
					if(day <= 30)
					{
						cout<<"Date is valid.......";
					}
					else
					{
						cout<<"Date is invalid XXXXX.......";
					}
				}
				else if(month == 2 )
				{
					if((year%400 == 0) || (year%4 == 0 && year%100 != 0))
					{
						if(day<=29)         //leap year
						{
							cout<<"Date is valid.......";
						}
						else
						{
							cout<<"Date is invalid XXXXX.......";
						}
					}
					else
					{
						if(day<=28)				//not leap year
						{
							cout<<"Date is valid.......";
						}
						else
						{
							cout<<"Date is invalid XXXXX.......";
						}
					}
				}
				else
				{
					if(day <= 31)
					{
						cout<<"Date is valid.......";
					}
					else
					{
						cout<<"Date is invalid XXXXX.......";
					}
				}
			}
			else
			{
				cout<<"Date is invalid XXXXX.......";
			}
		}
		
				//get the values of data member
		getday() 			
		{
			return day;
		}
		getmonth()
		{
			return month;
		}
		getyear()
		{
			return year;
		}
};

main()
{
	Date d;   // create object of class
	
			//user input
	int x,y,z;
	cout<<"Enter a Date :- "<<endl;
	cout<<"Day   : ";
	cin>>x;
	cout<<"month : ";
	cin>>z;
	cout<<"Year  : ";
	cin>>y;
	
			//call the member functions
			
			//set the data members of class
	d.setday(x);
	d.setmonth(z);
	d.setyear(y);
	
			//get the data members of class
	cout<<endl<<"DATE : "<<d.getday()<<"/"<<d.getmonth()<<"/"<<d.getyear()<<endl;
	
	d.Checkvalidity();   //function call for check date is valid or not.
}


