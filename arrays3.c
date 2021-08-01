#include <stdio.h>
int main()
{
    int k[10]={1,3,5,7,9,11,13,15,17,19};
    int *ptr ;
    printf("%d\n" , *(k));      //value at index 0 in array k 
    printf("%d\n" , *(k+1));    //value at index 1 in array k
    
    printf("%d\n" , k[0]);      //value at index 0 in array k 
    printf("%d\n" , k[1]);      //value at index 1 in array k 
    
    printf("%d\n" , k);         //address of index 0 in array k 
    printf("%d\n" , &k[0]);     //address of index 0 in array k 

    printf("%d\n" , k+1);         //address of index 0 in array k 
    printf("%d\n" , &k[1]);       //address of index 0 in array k
    return 0;
}