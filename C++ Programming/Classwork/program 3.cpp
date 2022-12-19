#include <iostream>
using namespace std;

int main ()
{
	int a,b;
	
	cout <<"Enter A : "<<"\tEnter B :";
	cin >>a>>b;
	
	
	cout <<"\n Add :"<< (a+b);
	cout << "\n sub : "<< (a-b);
	cout << "\n mul :"<<(a*b);
	cout << "\n Div  :"<< ((float)a/b);
	
	return 0;
}