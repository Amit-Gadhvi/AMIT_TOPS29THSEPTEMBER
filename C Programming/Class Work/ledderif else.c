#include <stdio.h>
void main ()
{
	int rollno,s1,s2,s3,total;
	char name [15];
	float per;
	
	printf ("===========Student Info================");
	printf ("\n Enter Roll No : ");
	scanf ("%d",&rollno);
	printf ("\n Enter Student Name : ");
	scanf ("%s",&name);
	printf ("\n Enter the marks of Science :"  );
	scanf ("%d",&s1);
	printf ("\n Enter the marks of Maths  :"  );
	scanf ("%d",&s2);
	printf ("\n Enter the marks of GK :"  );
	scanf ("%d",&s3);
	total= s1+s2+s3;
	per = (float)total/3;
	printf("\nTotal Marks : %d",total);
	printf("\nPercentage : %.2f%",per);
	
	if (per>=70)
	{
		printf("\n Distinction");
	}
	else if (per>=60)
	{
		printf ("\n First class ");
	}
	else if (per>=50)
	{
		printf ("\n Second class ");
	}
	else if (per>=40)
	{
		printf ("\n Pass class ");
	}
	else 
	{
		printf ("\n Fail");
		
	}
	
	
}