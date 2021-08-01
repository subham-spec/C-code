#include <stdio.h>
int main()
{
    int i=23;
    int *ptr = &i;
    printf("%d\n" , *ptr);  //value stored in ptr i.e value of i
    printf("%d\n" , ptr);   //address stored in ptr i.e of i

    int **p = &ptr;
    printf("%d\n" , **p);   //value stored in p i.e value of ptr i.e value of i 
    printf("%d\n" , p);    //address stored in p i.e of ptr
    return 0;
}