#include <stdio.h>
int main()
{
    for(int k=51 ; ; k++)
    {
        if(k%3==0 && k%5==0)
        {
            printf("%d\n" , k);
        }
        if(k>100)
        break;

    }
}