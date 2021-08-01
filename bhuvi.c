#include<stdio.h>
int main()
{
    int x,k,i;
    printf(" The prime numbers between 1 and 100 : \n");
    for(x = 2 ; x <= 100 ; ++x)
    {
        i=0;
        for(k=2;k<=x/2;k++)
        {
            if((x % k) == 0)
            {
                i++;
                break;
            }
        }
        if(i==0)
        printf("\n    %d ", x);
    }
    return 0;
}

