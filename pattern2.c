#include <stdio.h>
int main(){
    int row;

    printf("Enter the number of rows u have to print\n");
    scanf("%d", &row);

    for(int i=1; i<=row ; i++)
    {
        for(int j=1 ; j<=row ; j++)
        {
            if(j<i)
            {
                printf(" ");
            }
            else
            {
                printf("*");
            }
        }
        printf("\n");
    }
    
    for(int i=row-1 ; i>0 ; i--)
    {
        for(int j=1 ; j<=row ; j++)
        {
                if(j<i)
                {
                    printf(" ");
                 }
                else
                {
                    printf("*");
                }                                  
        }
        printf("\n");
    }
}