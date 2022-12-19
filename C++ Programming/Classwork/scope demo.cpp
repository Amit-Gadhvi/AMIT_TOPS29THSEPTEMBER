#include <iostream>
using namespace std;


class scopedemo{
	public:
		void function ()
		{
			cout <<"This is function 1";
		}
	void func2 ()
};

void scopedemo::func2()
{
	cout<<"This is function 2";
}

class B : public scopedemo{
	public :
		void B1()
		{
			scopedemo::function();
		}
};


int main ()
{
 B sd;
 sd.functuin();
 sd.func2();
 sd.B1();	
	
	
	return 0;
}