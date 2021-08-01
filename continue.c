#include <stdio.h>
int main()        
{
    float sum;
    for(float a=11.1 ; a<13 ; a+=0.1)
    {
        sum=sum+a;
    }
    printf("%f" , sum);
    return 0;
}