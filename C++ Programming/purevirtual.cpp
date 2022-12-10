#include<iostream>
using namespace std;

/*
	Pure Virtual Function :  A Function without a body and its
							implementation in the derived class 
							is called a pure virtual Function.
							
							They are declared with virtual keyword.
							
		e.g virtual void function_name();
	                         

*/


class Sample1{
	public:
		
		//Non Virtual Function
		void f1()
		{
			cout<<"\n Non pure virtual Function.";
		}
		
		virtual void f2(); //Pure Virtual Function.
		
};

class Sample2: public Sample1{
	public:
		
		void f2()
		{
			cout<<"Implemented Pure Virtual Function in Sample2 Class";
		}
		
};


int main()
{
	Sample2 s;
	s.f1();
	s.f2();
	return 0;
}