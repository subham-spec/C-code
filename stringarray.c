#include <stdio.h>
void printStr(char ji[5])
{
    int i=0;
    printf("Enter the character one by one\n");
    while(ji[i]!='\0' || i!=5)
    {
        if(i!=4)
        {
            gets(ji);
        }
        else
        {
            printf("Now u must enter \0 character");
        }
    }
}
int main()
{
    char name[5];
    printStr(name);
        puts(name);
    
    return 0;
}


