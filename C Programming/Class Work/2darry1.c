#include <stdio.h>
void main()

{
	int arr1[3][3];
	int i,j;
	
	for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("\n Enter Index[%d][%d] :",i,j);
			scanf ("%d",&arr1[i][j]);
		}
		
		}
		for (i=0;i<3;i++)
	{
		for (j=0;j<3;j++)
		{
			printf ("\n Value at Index [%d][%d] :%d",i,j,arr1[i][j] );	
}
}
}