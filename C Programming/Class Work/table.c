#include <stdio.h>
void main ()
{
	int x,y,z;
	
	printf ("\n Enter Number : ");
	scanf ("%d",&x);
	
	for (y=1;y<=10;y++)
	{
		z=x*y;
		printf ("\n %d * %d =%d\n",x,y,z);
	}
	
}