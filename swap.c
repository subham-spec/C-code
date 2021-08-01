#include <stdio.h>
int a=23;
int b=77;
void swap(int n1 , int n2)
{
    int temp;
    temp=n1;
    a=n2;
    b=temp;
   
}
int main()
{
    printf("The first no a= %d and b= %d" , a,b);
    swap(a,b);
    printf("\nafter swap a= %d and b= %d" , a,b);
    return 0;
}