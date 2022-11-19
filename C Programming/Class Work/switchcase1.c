#include <stdio.h>
void main ()
{
	 int a,b,choice;
	 
	 printf ("\n ******************** Here is your choice calculator ********************");
	 printf ("\n Enter A : = ");
	 scanf ("%d",&a);
	 printf ("\n Enter  B : =");
	 scanf ("%d",&b);
	 printf ("\n press 1 for addition \n press 2 for substraction \n press 3 for multipliction \n press 4 for division");
	 printf ("\n\n Enter your choice ");
	 scanf ("%d",&choice);
   
     switch (choice)
     {
     	case 1 : printf("\nAddition : %d",(a+b));
				break;
		case 2 : printf("\nSubtraction : %d",(a-b));
				break;
		case 3 : printf("\nMultiplication : %d",(a*b));
				break;
		case 4 : printf("\nDivision : %.2f",(a/(float)b));
				break;
		default:printf("\nInvalid Choice.");
				break;	
	}
	 
}
