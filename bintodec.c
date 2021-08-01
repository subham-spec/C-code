#include <stdio.h>
#include <math.h>
int sim, bin,i=0,rem;
void binary(int b)
{
    while(b!=0)
    {
        rem=b%10;
        b=b/10;
        sim+=rem*pow(2,i);
        i++;
    }
    printf("The number in dec form is %d " , sim);
}
void main()
{
    printf("Enter the binary form\n");
    scanf("%d" , &bin);
    binary(bin);
}


