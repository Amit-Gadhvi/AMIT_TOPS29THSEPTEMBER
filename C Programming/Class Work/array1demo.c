#include <stdio.h>
void main()
{
	int arr[5];
	int i;
	printf("\n =================Ener Array==================");
	for (i=0;i<5;i++)
	{
		printf("\n Enter Element[%d] ",i+1);
		scanf("%d",&arr[i]);
	}
		for (i=0;i<5;i++)
		{ 
		printf ("\n Element [%d]=%d",i+1,arr[i]);
		}
	}
	
  
