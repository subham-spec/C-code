#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[20], opp[20];
    printf("Enter the word\n");
    gets(str);

    printf("The reversed string is :\n");
    puts(strrev(str));

    // int a= strlen(str);
    // for(int j=0,k=a-1 ; k>0, j<a ; k--, j++)
    // {
    //     strcpy(opp,str);
    //     char m=str[k];       
    //     opp[j]=m;
    //     printf("%c" , opp[j]);
    // }
    
}
