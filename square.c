#include <stdio.h>
int main()
{
    int no;
    char ch[25]={ A , B , C };
    printf("Enter the no of rows you have to print\n");
    scanf("%d",&no);
    if(no>5)
    {
        printf("Your choice is invalidn\nYou cann't choose that one\n");
    }
    else
    {
        for(int i=0 ; i<ch.length ; i++)
        {
            printf(ch[i]);
        }
    }
    
}