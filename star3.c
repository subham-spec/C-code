#include <stdio.h>
int main()
{
    printf("Enter the no");
    int a;
    scanf("%d" , &a);
    for(int j=1 ; j<=a ; j++)
    {
        if(j==1 || j==a)
        {
            for(int k=1 ; k<=a ; k++)
            {
                printf("# ");
            }
        }
        else
        {
            for(int k=1 ; k<a ; k++)
            {
                if(k==j || k==a-j+1)
                {
                    printf("# ");
                }
                else
                {
                    printf("  ");
                }
                
            }
        }
        printf("\n");
    }
}

