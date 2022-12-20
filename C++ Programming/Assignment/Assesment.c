#include<stdio.h>

void main()
{
	int a,b,choice;
	
	printf("\n================  MENU  ===============\n");
	

	printf("\n 1. Addition\n 2. Subtraction\n 3. Mulitplication\n 4. Division");
	printf("\n\nEnter your choice ");
	scanf("%d",&choice);
	printf("\nEnter First Number : ");
	scanf("%d",&a);
	printf("\nEnter Second Number : ");
	scanf("%d",&b);
	
	
		
	if(choice==1)
	{
		printf("\n\nAddition : %d",(a+b));
	}
	else if(choice ==2)
	{
		printf("\nSubtraction : %d",(a-b));
	}
	else if(choice==3)
	{
		printf("\nMultiplication : %d",(a*b));
	}
	else if(choice==4)
	{
		printf("\nDivision : %.2f",(a/(float)b));
	}
	else
	{
		printf("\nInvalid Choice");
	}
	
	
	
}
