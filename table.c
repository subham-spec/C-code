#include <stdio.h>
int subham(int a)
{
    scanf("%d" , &a);
    for(int i=1 ; i<11 ; i++)
    {
        int z=a*i;
        printf("%d * %d = %d\n",a,i,z);
    }
}
int main()
{
    printf("Enter the no of table");
    int a;
    int c;
    c=subham(a);
}



