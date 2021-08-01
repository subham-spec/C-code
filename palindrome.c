#include <stdio.h>
    int no, rev,k;
void palindrome(int num)
{
    while(num!=0)
    {
        k=num%10;
        num/=10;
        rev=rev*10+k;
    }
}
void main()
{
    printf("Enter the number which you find to palindrome\n");
    scanf("%d" , &no);
    palindrome(no);
    if(rev==no)
    {
        printf("The number is palindrome\n");
    }
    else
    {
        printf("The number you have entered is not palindrome\n");
    }
}