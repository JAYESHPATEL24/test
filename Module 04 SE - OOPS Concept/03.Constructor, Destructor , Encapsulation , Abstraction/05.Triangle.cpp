/*C++ program to create a class called Triangle that has private 
member variables for the lengths of its three sides. Implement member 
functions to determine if the triangle is equilateral, isosceles, or scalene. */

#include<iostream>
using namespace std;

class Triangle{
	
	private:
		int s1,s2,s3; //data member for three sides of triangle.
	
	public:
		Triangle(int a,int b,int c)	//constructor for assign values 
		{
			s1 = a;
			s2 = b;
			s3 = c;
		}
			
			
					//member functions for find type of Triangle.
		triequilateral()
		{
			if(s1==s2 && s2 == s3 )
			{
				cout<<"Triangle is Equilateral Triangle."<<endl<<endl;
			}
		/*	else
			{
				cout<<"Triangle is not Equilateral Triangle."<<endl<<endl;
			}*/
		}
		
		triisosceles()
		{
			if(((s1==s2) && (s2!=s3)) || ((s2==s3) && (s1!=s3)) || ((s1==s3) && (s1!=s2)))
			{
				cout<<"Triangle is isosceles Triangle."<<endl<<endl;
			}
		/*	else
			{
				cout<<"Triangle is not Isosceles Triangle."<<endl<<endl;
			}*/
		}
		
		triscalene()
		{
			if((s1!=s2) && (s2!=s3) && (s1!=s3))
			{
				cout<<"Triangle is scalene Triangle."<<endl<<endl;
			}
			/*else
			{
				cout<<"Triangle is not scalene Triangle."<<endl<<endl;
			}*/
		}
};

main()
{	
					//accept value of sides from user.
	int a,b,c;
	cout<<"Enter three sides of Triangle : "<<endl;
	cout<<"Side 1 : ";
	cin>>a;
	cout<<"Side 2 : ";
	cin>>b;
	cout<<"Side 3 : ";
	cin>>c;	
	cout<<endl<<endl;
	cout<<"_____________________________________"<<endl<<endl;

	Triangle t(a,b,c);		//create an object
	
					// call member functions for find triangle type.
	t.triequilateral();
	t.triisosceles();
	t.triscalene();
	
	cout<<"_____________________________________"<<endl;
}


