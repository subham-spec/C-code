#include <stdio.h>

void main()
{
    goto Restart;
    Restart:

    printf("Enter any odd number to see the output greater than 5 : \n");
    int no;
    scanf("%d" , &no);

    if(no%2 == 0 || no<5)
    {
        printf("Please enter the valid number\n");
        goto Restart;
    }
    else
    {
        for(int i=1 ; i<=no ; i++)
        {
            for(int j=1 ; j<= no ; j++)
            {
                if(i==1 || i==no/2+1 || i==no)
                {
                    printf("* ");
                }
                else if(j==1 || j==no/2+1 || j==no)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            printf("\n");
        }
    }
}

