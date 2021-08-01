#include <stdio.h>
int main()
{
    for(int a=100 ; ; a-=1)
    {
        if(a%3==0)
        {
            printf("\nNumber is divisible by 3 i.e.,%d", a);
        }
        else if(a<50)
        {
            break;
        }       
    }
}

