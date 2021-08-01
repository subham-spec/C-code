#include <stdio.h>
int no, ans;
void array(int num)
{
    char arr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};                                   
    int i;
    if(num%26==0)
    {
        i=num/26;
        for(i ; i>0 ; i--)
        {
            printf("Z");
        }
    }
    else
    {
        while(num!=0)
        {
            if(num>26)
            {
                i=num/26;
                printf("%c" , arr[i-1]);
                num/=26;
            }
            else
            {
                printf("%c" , arr[i-1]);
                break;
            }
        }
    } 
}
void main()
{
    printf("Enter the index of the column\n");
    scanf("%d" , &no);
    array(no);
}
