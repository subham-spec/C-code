#include <stdio.h>
void main()
{
    printf("Enter the number of elements in the array : \n");
    int n;
    scanf("%d" , &n);

    printf("Enter the elements of the array one by one:- \n");
    int arr[n-1];
    for(int i=0 ; i<n ; i++)
    {
        scanf("%d\n" , &arr[i]);
    }
    int size;
    size= sizeof(arr)/sizeof(arr[0]);

    printf("The size of the array is : %d\n", size);
    for(int i=0 ; i<size ; i++)
    {
        printf("%d" ,arr[i]);
    }
}

