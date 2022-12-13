#include <stdio.h>

void main()
{
    float years, days;
    printf("Years to days\n");
    printf("Enter number of years : ");
    scanf("%f", &years);
    printf("%f Years is %f Days", years, years*365);

    printf("Days to years\n");
    printf("Enter number of Days : ");
    scanf("%f", &days);
    printf("%f Days is %f Years", days, days/365);
}