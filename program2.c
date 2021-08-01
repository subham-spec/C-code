#include <stdio.h>
void tea(i)                  //Declairation of a function 
{
    printf("You want to drink a Tea\n You are cool Pandit ji\n");
}
void coffee(i)                     //Declairation of a function 
{
    printf("You want to drink a Coffee\n You are smart Pandit ji\n");
}
int main()                      //main funtion....code start from here
{   
    int choice;                 //variable for user input
    printf("Select any one from the following\n 1 for Tea\n 2 for Coffee\n");
    scanf("%d" , &choice);      //scan function to take input from the user 
    for(int i=1 ; i<=2 ; i++)
    {
        if(i==choice)
        {
            tea(i);          //calling function name coffee
            break;
        }
        else if(i+1 == choice)
        {
            coffee(i+1);           //calling function name coffee
            break;
        }
    }
    return 0;
}


