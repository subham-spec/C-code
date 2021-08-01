#include <stdio.h>
void main()
{
    int row, col;
    printf("Enter either rows and colums of the array..\n");
    scanf("%d" ,&row);
    col=row;
    int arr[row][col];
    printf("Enter the elements of the array one by one...\n");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            scanf("%d" , &arr[i][j]);
        }
    }
    printf("The first diagonal of the array is...\n");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(i==j)
            printf("%d ", arr[i][j]);
            else
            printf("  ");            
        }
        printf("\n");
    }
    int c=col-1;
    printf("The second diagonal of the array is...\n");
    for(int i=0 ; i<row ; i++)
    {
        for(int j=0 ; j<col ; j++)
        {
            if(j==c)
            {
                printf("%d ", arr[i][j]);
                c--;
            }
            else
            {
                printf("  ");            
            }
        }
        printf("\n");
    }
}

