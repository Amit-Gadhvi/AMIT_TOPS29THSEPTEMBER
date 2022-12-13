#include <stdio.h>

void main() 

{
    float Intrest, principal , rate, time;
    
    
    printf("Enter Principal : ");
    scanf("%f", &principal);
    
    printf("\n Enter Rate of interest : ");
    scanf("%f", &rate);
    
    printf("\n Enter Time : ");
    scanf("%f", &time);
    
    printf("Ans : %f",Intrest= principal*rate*time/100);
}