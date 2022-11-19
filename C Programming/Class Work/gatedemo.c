#include <stdio.h>
void main ()
{
	int a=1, b=0;
	
	if(a&&b)
	{
	printf ("\n Line 1 is true ");
	}
	else
	{
	printf ("\n Line 2 is false ");
	}
	
	a=0,b=0;
	
	if (a||b)
	{
		printf ("\n Line 3 is true ");
		
	}
	else
	{
		printf ("\n Line 4 is false ");
	}
	 a=0,b=0;
	 
	if(!(a&&b))
	{
		printf("\n Line 5 - Condition is True.");
	}
	else
	{
		printf("\n Line 6 - Condition is False.");
	}
	 
}
 