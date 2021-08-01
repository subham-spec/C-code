#include <stdio.h>
int subham(int m , int n);//m and n are formal parameters
int main()
{
    int a,b,c;
    a=56;       //local variable
    b=44;       //local variable
    c=subham(a,b);  //actual parameters
    printf("the sum is %d \n" , c);
}
int subham(int m , int n)       //call by value
{
    return m+n;
}