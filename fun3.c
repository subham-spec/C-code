#include <stdio.h>
int add(int m , int n)
{
    return(m+n);
}
int sub(int m , int n)
{
    return(m-n);
}
int mul(int m , int n)
{
    return(m*n);
}
int rem(int m , int n)
{
    return(m%n);
}
int main()
{
    int a,b,c,k;        //local variables
    printf("Enter the no one by one\n");
    scanf("%d%d\n" , &a, &b);
    printf("1 for multiply , 2 for addition , 3 for subtraction , 4 for remainder");
    scanf("%d" , &k);
    switch (k)
    {
    case 1:
        c=mul(a,b);     //call by value  // m and n are actual parameters
        break;
    case 2:
        c=add(a,b);     //call by value  // m and n are actual parameters
        break;
    case 3:
        c=sub(a,b);     //call by value  // m and n are actual parameters
        break;
    case 4:
        c=rem(a,b);     //call by value  // m and n are actual parameters
        break;
    default:
        break;
    }
    printf("the sum is %d \n" , c);
}


