/* Write a C program to divide two integers (dividend and divisor) without using 
multiplication, division and mod operator. */
#include <stdio.h>
void main()
{
    int end,sor;
    printf("Enter the dividned\n");
    scanf("%d" , &end);
    printf("Enter the divisor\n");
    scanf("%d" , &sor);
    for(int i=0 ; ; i++)
    {
        if(sor*i>=end)
        {
            printf("The quetient is %d" , i);
            break;
        }
        else
        {
            continue;
        }
    }
}