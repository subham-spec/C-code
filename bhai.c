#include <stdio.h>
#include <string.h>
void main()
{
    printf("Enter the two numbers\n");
    int a,b;
    scanf("%d%d",&a,&b);
    printf("Enter the operation\n");
    char op;
    scanf("%c", &op);
    switch (op)
    {
        case '+':
            printf("%d",a+b);
            break;
        case '-':
            printf("%d",a-b);
            break;
        case '*':
            printf("%d",a*b);
            break;
        case '/':
            printf("%d",a/b);
            break;
        default:
            printf("Please enter the valid input\n");
    }
}
