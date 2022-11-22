#include <iostream>
using namespace std;

int func1(int a,int b)
{
	return a+b;
}


int main ()
{
	int n,e;
	cout<<"Enter No.";
	cin>>n>>e;
	cout << func1(n,e);
	
	return 0;
}