#include <stdio.h>
int k=1;
int calc(base , exp)
{
    int z=base;
    // printf("base %d power  %d\n" , z , exp);
    if(exp > 0)
    {
        return(k=k*z && calc(k , exp-1));
    }
    else
    {
        printf("The value of %d raise to power %d is %d" , z , exp , k );
        return 0;
    }
    
}
int main()
{
    int base , exp;
    printf("Enter the base value and the exponent value\n");
    scanf("%d %d" , &base , &exp);
    calc(base, exp);
}

