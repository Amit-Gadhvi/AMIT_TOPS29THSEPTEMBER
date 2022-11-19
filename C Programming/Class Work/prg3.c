#include <stdio.h>
void main()
{
	int age;
	char name[15];
	float salary;
	
	printf ("\n==============Accepting Employee Details==============");
	printf ("\n Enter Name : ");
	scanf ("%s",&name);
	printf ("\n Enter Age  :");
	scanf ("%d",&age);
	printf ("\n Enter Salary :");
	scanf ("%f",&salary);
	printf ("\n================== Display Employee details====================");
	printf("\n Name : %s",name);
	printf ("\n Age :%d",age);
	printf ("\n salary :%f",salary);
	
	}