#include<stdio.h>

void main()
{
	int arr1[5],arr2[5];
	int i;
	printf("\n======================= Enter Array1 ====================================\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter Element[%d] : ",i+1);
		scanf("%d",&arr1[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nElement [%d] = %d",i+1,arr1[i]);
	}
	
	
	printf("\n============================ Enter Array2 =============================\n");
	
	for(i=0;i<5;i++)
	{
		printf("Enter Element[%d] : ",i+1);
		scanf("%d",&arr2[i]);
	}
	
	for(i=0;i<5;i++)
	{
		printf("\nElement [%d] = %d",i+1,arr2[i]);
	}
	
	
	printf("\n=========================== Array Addition ===============================\n");
	
	for(i=0;i<5;i++)
	{
		printf("\nElement [%d] = %d",i+1,arr1[i]+arr2[i]);
	}
	
}






