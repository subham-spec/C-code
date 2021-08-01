#include <stdio.h>
void reverseSentence();
int main()
{
    printf("Enter the word");
    reverseSentence();
    return 0;
}

void reverseSentence()
{
    char c;
    scanf("%c" , &c);
    if(c!= '\n')
    {
        reverseSentence();
        printf("%c" , c);
    }
}



