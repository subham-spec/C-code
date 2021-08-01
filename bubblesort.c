#include <stdio.h>
void main()
{
    int arr[]={23,76,2,9,12,45,34};
    printf("The array before soted is : \n");
    for(int i=0 ; i<7 ; i++)
    {
        printf("%d  ", arr[i]);
    }
    for(int i=0 ; i<7 ; i++)
    {
        for(int j=i+1 ; j<7 ; j++)
        {
            if(arr[j]<arr[i])
            {
                int temp=arr[i];
                arr[i]=arr[j];
                arr[j]=temp;
            }
        }
    }
    printf("\nThe sorted array is : \n");
    for(int i=0 ; i<7 ; i++)
    {
        printf("%d  ", arr[i]);
    }
}