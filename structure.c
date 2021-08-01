#include <stdio.h>
#include <string.h>

struct data //this is the name of the varible we have given to the compiler
{
    int roll_no;    //1st varibale type
    int class;      //2nd varibale type
    char name[30];  //3rd varibale type
};
struct data Subham, Abhinav, Amiya;
void main()
{
    Subham.roll_no = 1;     //Entering of the data
    Abhinav.roll_no = 1;    //Entering of the data
    Amiya.roll_no = 1;      //Entering of the data

    Subham.class = 1;       //Entering of the data
    Abhinav.class = 1;      //Entering of the data
    Amiya.class = 1;        //Entering of the data

    strcpy(Subham.name, "Subham Sharma");
    strcpy(Abhinav.name, "Abhinav Sir ji");
    strcpy(Amiya.name, "Amiya Bhaiya");

    printf("%c\n" , Subham.name);
    printf("%c\n" , Abhinav.name);

    printf("Name and class of roll no %d is %c and %d" , Subham.roll_no , Subham.name , Subham.class);
}