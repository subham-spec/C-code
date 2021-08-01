#include <stdio.h>
void main()
{
    printf("Enter the length of the array\n");
    int len;
    scanf("%d" ,&len);
    int array[len-1];
    printf("Now enter the values of the arrays one by one\n");
    for(int i=0 ; i<len ; i++)
    {
        scanf("%d" , &array[i]);
    }
    printf("The ascending form of array is ");
    for(int i=0 ; i<len ; i++)
    {
        for(int j=i+1 ; j<len ; j++)
        {
            if(array[j]<array[i])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i=0 ; i<len ; i++)
    {
        printf("%d ", array[i]);
    }
    printf("\nThe descending form of array is ");
    for(int i=0 ; i<len ; i++)
    {
        for(int j=i+1 ; j<len ; j++)
        {
            if(array[j]>array[i])
            {
                int temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }
        }
    }
    for(int i=0 ; i<len ; i++)
    {
        printf("%d ", array[i]);
    }
}