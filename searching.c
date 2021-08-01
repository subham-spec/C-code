#include <stdio.h>
void linear(int arr[], int last, int key)
{
    for (int i = 0; i <= last; i++)
    {
        if (arr[i] == key)
        {
            printf("character is at %d position", i + 1);
        }
    }
}
void binary(int arr[], int mid, int last, int key)
{
    if (arr[mid] > key)
    {
        for (int i = mid; i > 0; i--)
        {
            if (arr[i] == key)
            {
                printf("\ncharacter is at %d position", i + 1);
            }
        }
    }
    else if (arr[mid] < 56)
    {
        for (int i = mid; i <= last; i++)
        {
            if (arr[i] == key)
            {
                printf("\ncharacter is at %d position", i + 1);
            }
        }
    }
    else
    {
        printf("The entered character is at %d position ", mid);
    }
}
void main()
{
    printf("Enter the number of terms in the array\n");
    int size;
    scanf("%d", &size);

    printf("Enter the numbers one by one in the array\n");
    int arr[size - 1];
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the key number which you wants to find\n");
    int key;
    scanf("%d", &key);

    printf("Enter the type of searching you wants to do\n1 for linear search\n2 for binary search\n");
    int search;
    scanf("%d", &search);

    int last = size - 1;
    int mid = last / 2;
    if (search == 1)
    {
        linear(arr, last, key);
    }
    else if (search == 2)
    {
        printf("After sorting your array becomes to be\n");
        for (int i = 0; i <= last; i++)
        {
            for (int j = i + 1; j <= last; j++)
            {
                if (arr[j] < arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        for (int i = 0; i <= last; i++)
        {
            printf("%d ", arr[i]);
        }
        binary(arr, mid, last, key);
    }
}