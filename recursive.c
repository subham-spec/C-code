#include <stdio.h>
int a=0 , b=1;      //global variables
int fibonacci(int n1)  //defining of function
{  
    int temp;       //local variable
    if( n1<=0)
    {    
        return 0;
    }
    else
    {
        printf("%d , " , a);
        temp=a;     
        a=b;
        b=a+temp;
        return(fibonacci(n1-1));//recursive statement
    }
}
int main()      //main function
{
    int no;         //local variable
    printf("Enter number of terms\n");
    scanf("%d", &no);
    printf("Fibonacci series till %d terms\n", no);
    fibonacci(no);  // function call  //no is a actual parameter
}
