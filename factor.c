#include <stdio.h>
int main()
{
    int a;
    printf("Enter the no\n");
    scanf("%d" , &a);
    for (int i=1 ; i<a/2 ; i++)
    {
        if(a%i==0)
        printf("%d" , i);
    }
}