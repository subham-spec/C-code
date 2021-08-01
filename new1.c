#include <stdio.h>
int main()
{
    int a;
    int b;
    float ans;
    char op;

    printf("Enter any operation from= '+','-','/','*'");
    scanf("%c", &op);

    printf("Enter the first no ");
    scanf("%d", &a);

    printf("Enter the second number ");
    scanf ("%d", &b);

    switch(op){
        case '+' :
        ans=a+b;
         printf("%f", ans);
         break;

        case '-' :
        ans=a-b;
         printf("%f", ans);
         break;
        
        case '*' :
        ans=a*b;
         printf("%f", ans);
         break;
        
        case '/' :
        ans=a/b;
         printf("%f", ans);
         break;
        
        default:
         printf("May be you have choosen something diffenrent");
    }
}