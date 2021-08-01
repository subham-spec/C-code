#include <stdio.h>
int fact(int number)
{
    if(number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        return(number * fact(number-1));
    }    
}
int main()
{
    printf("Enter the number");
    int no;
    scanf("%d" , &no);
    printf("the factorial of the number is %d\n" , fact(no));
}
