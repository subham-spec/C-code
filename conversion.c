#include <stdio.h>
int main()
{
    int input,data,n;
    float out;
    now:
    printf("Enter your choice\n");
    printf("CONVERSION FOR:--\n 1 for KMS TO MTR\n 2 for MTR TO INCHES\n 3 for KG TO POUNDS \n 4 for KGS TO GRAMS\n\n");
    scanf("%d" , &input);
    printf("now enter you data according to your choice\n");
    scanf("%d" , &data);

    switch (input)
    {
        case 1:
        out=data*1000;
        printf("your result is %f" , out);
        break;

        case 2:
        out=35.6*data;
        printf("your result is %f" , out);
        break;

        case 3:
        out=1.6*data;
        printf("your result is %f" , out);
        break;

        case 4:
        out=data*1000;
        printf("your result is %f" , out);
        break;

        default:
        printf("your choice is invalid");
        goto last;
    }
    last:
    printf("\n\nDid you want to find one more,,,Enter 1 for continue and 0 to exit");
    scanf("%d" , &n);
    if(n==1)
    {
        goto now;
    }
    return 0;
}