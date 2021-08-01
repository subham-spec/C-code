#include <stdio.h>
int main()
{
    int a=45;
    int *ptr = &a;
    printf("%d\n" , ptr);   //value stored in ptr i.e. value of a

    printf("%u\n" , &a);    //address of a
    printf("%u\n" , ptr);   //address of a

    printf("%d\n" , *ptr);   //value at address of a
    printf("%d" , *(&a));   //value at address of a

    printf("%x\n" , ptr);   //address of a in binary form
    printf("%x\n" , &a);    //address of a in binary form

    printf("%d\n" , ptr+1); //increment in the value stored in ptr i.e increment in value of a
    printf("%d\n" , *ptr+1);//increment in the size of a
    return 0;
}
