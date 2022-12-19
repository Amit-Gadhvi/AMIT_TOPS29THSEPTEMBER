#include<iostream>
using namespace std;


class Sample{
	public:
			
			Sample()
			{
				cout<<"\n\nDefault Constructor Called.";
			}
			
			Sample(string fname,string lname,string email)
			{
				cout<<"\n\nParameterized Constructor Called.";
				cout<<"\nFname : "<<fname;
				cout<<"\nLname : "<<lname;
				cout<<"\nEmail : "<<email;
			}
	
};


int main()
{
	Sample s1("Amit","Gadhvi","amit@gmail.com");
	Sample s2("Amit", "Gadhvi","amit","rakesh@gmail.com");
	Sample s3("Amit","Gadhvi","amit@gmail.com");
	Sample s6;
	Sample s4("Amit","Gadhvi","amit@gmail.com");
	Sample s5("Amit ","Gadhvi","amit@gmail.com");
	
	return 0;
}