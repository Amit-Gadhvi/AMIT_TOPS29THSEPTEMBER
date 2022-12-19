#include <iostream>
using namespace std;

class PersonalDetails {
	public:
	     string fname,lname,email;
	     
	     void acceptdetails()
	     {
	     	cout<<"Enter your First Name :";
	     	cin>>fname;
	     	cout<<"Enter your Last Name :";
	     	cin>>lname;
	     	cout<<"Enter your Email :";
	     	cin>>email;
		 }
		 
		 void displaydetails()
		 {
		 
		 cout <<"\nEnter your First Name :"<<fname;
		 cout <<"\nEnter your Last Name :"<<lname;
		 cout <<"\nEnter your Email ID :"<<email;
         }
};


int main()

{
	PersonalDetails p;
	p.acceptdetails();
	p.displaydetails();
	
	
	
	return 0;
}