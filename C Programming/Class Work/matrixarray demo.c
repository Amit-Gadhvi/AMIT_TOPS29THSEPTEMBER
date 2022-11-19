
#include<stdio.h>

void main()
{
	int matrix1[3][3],matrix2[3][3];
	int i,j;
	
	printf("\n==================== Accept Matrix 1 ===========================\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Matrix1 [%d][%d] :",i,j);
			scanf("%d",&matrix1[i][j]);			
		}		
	}
	
	printf("\n======================== Accept Matrix 2 =============================\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Matrix2 [%d][%d] :",i,j);
			scanf("%d",&matrix2[i][j]);			
		}		
	}
	
	
	printf("\n=========================Matrix 1======================================\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix1[i][j]);
		}
		printf("\n");
	}
	

	
	
	printf("\n============================== Matrix 2 ============================\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",matrix2[i][j]);
		}
		printf("\n");
	}
	
	
		printf("\n===========================Subtraction of Matrix 1 and MAtrix 2 ==============================\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%d\t",(matrix1[i][j]-matrix2[i][j]));
		}
		printf("\n");
	}
	
	
	
	
	
	
	
}
