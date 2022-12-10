#include <iostream>
using namespace std;

class A{
	public :
		void show()
		{
			cout <<"\n Show form A";
			
		}
};
class B :public A{
	public :
	void show ()
	{
		A::show();
		cout <<"\n Show from B";
		
	}
};
class C :public B{
	public :
		void show()
		{
			B::show();
			cout <<"\n Show from C";
		}
};

int main ()
{
	C obj;
	obj.show();
	
	return 0;
}