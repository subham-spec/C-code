#include<stdio.h>
int n=12;
int k=19;
void swap(int n1,int k1)
{
    int tmp = n1; 
    n=k1;    
    k=tmp; 
}
int main()
{
    swap(n, k);
    printf("\nAfter swapping n=%d, k=%d\n",n,k);
    return 0;
}

