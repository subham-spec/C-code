#include <math.h>
#include <stdio.h>
void main()
{
    float base, exp;
    printf("Enter the base value\n");
    scanf("%f" , &base);
    printf("Enter the exponent value \n");
    scanf("%f" , &exp);
    float output=pow(base,exp);
    printf("The value is %0.4f" , output);
}