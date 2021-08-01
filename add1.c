#include <stdio.h>
int add(int number)
{
    if(number > 10)
    {
        return 0;
    }
    else
    {
       return(number + add(number+1));
    }    
}
int main()
{
    int no=1;
    printf("the sum of the number is %d\n" , add(no));  //call by value
}
