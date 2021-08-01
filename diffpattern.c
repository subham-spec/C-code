/*
3 3 3 3 3 
3 2 2 2 3
3 2 1 2 3
3 2 2 2 3
3 3 3 3 3
*/
#include <stdio.h>
void main()
{
    int no;
    printf("Enter the number \n");
    scanf("%d", &no);
    for (int i = 1; i < 2*no; i++)
    {
        int m=no;
        if(i<=no)
        {
            for (int j = 1; j < 2*no; j++)
            {
                printf("%d " , m);
                if(i>j)
                    m=m-1;
                if(i+j >= 2*no)
                m=m+1;
            }
        }
        printf("\n");
    }
}
