#include <stdio.h>
int a=23;
int b=78;
sec (int m, int n)
{
    a=n;
    b=m;
}
int main()
{
    sec(a,b);
    printf("Swapping done with a= %d and b=%d" , a,b);
    return 0;
}