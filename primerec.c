#include <stdio.h>
int no, i=2;
int check(i)
{
    if(i<no/2)
    {
        if(no%i==0)
        {
            printf("the no is not prime\n");
            return 0;
        }
        else
        {
            return(check(i+1));
        }   
    }
    else
    {
        printf("the is prime\n");
        return 0;
    } 
}
int main()
{
    printf("Enter the no\n");
    scanf("%d" , &no);
    check(i);
}