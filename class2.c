#include <stdio.h>
int main()
{
    int a;
    printf("Enter the first number");
    scanf("%d", a);

    for(int i=2 ; i<= a/2 ; i++){
        if(a%i==0){
         printf("You entered an even number"); 
         break;
            }
    }
}