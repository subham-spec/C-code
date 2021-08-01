#include <stdio.h>
int swap(int *m, int *n)
{
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
    printf("a=%d and b=%d" , *m , *n);
}
int main()
{
    int a=34,b=46;
    swap(&a, &b);
}