#include <stdio.h>
int n1,n2,n;
int a()
{
    printf("Enter the first number\n");
    scanf("%d" , &n1);
    return n1;
}
int b()
{
    printf("Enter the second number\n");
    scanf("%d" , &n2);
    return n2;
}
int sqr(a,b)
{
    n=(a+b)*(a+b);
    return n;
}
int main()
{
    int a1, a2, s;
    a1=a();
    a2=b();
    s=sqr(a1,a2);
    printf("S=sqr(a()+b())= sqr(%d+%d)\n = sqr(%d) = %d" , a1 , a2 , a1+a2 , s);
    return 0;
}