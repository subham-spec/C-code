#include <stdio.h>
int main()                          //main function
{
    char name[20];                  //Declairation of a string variable
    printf("Enter a valid name\n");
    gets(name);                     //Method to get string values from user
     
    puts(name);                     //Method to print the values from a string datatype
    return 0;
}