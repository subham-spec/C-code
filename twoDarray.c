#include <stdio.h>
void main()
{
    int col;
    printf("Enter the column of the array :-\n");
    scanf("%d",  &col);
    int row=col;
    int arr[row-1][col-1];
    int arr2[row-1][col-1];
    int arr3[row-1][col-1];
    printf("Now enter the values one by one of the array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    printf("Now enter the values one by one of the second array: \n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr2[i][j]);
        }
    }
    int op;
    printf("Enter the operation\n1 for +\n2 for -\n3 for *\n");
    scanf("%d", &op);
    printf("The array you want to form is showed below plz check it at all :-\n");
    switch (op)
    {
        case 1:
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    printf("%d ",arr[i][j] + arr2[i][j]);
                }
                printf("\n");
            }
            break;
        case 2:
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                   printf("%d ",arr[i][j] - arr2[i][j]);
                }
                printf("\n");
            }
            break;
        case 3:
            for (int i = 0; i < row; i++)
            {
                for (int j = 0; j < col; j++)
                {
                    for (int k = 0; k < row; k++)
                    {
                        arr3[i][j] += arr[i][k] * arr2[k][j];
                    }
                    printf("%d ", arr3[i][j]);
                }
                printf("\n");
            }
            break;
        default:
            printf("Nothing bro...");
    }
}