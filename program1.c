#include <stdio.h>
int str[7] , i=0 , no;
void array(int n)
{
    while(no>10)
    {
        no=n/10;
        str[i]=n%10;
        i++;
        array(no);
        return;
    }
    str[i]=no;
    str[i+1]='\0';
    return ;
}
int main()
{
    printf("Enter the number\n");
    scanf("%d" , &no);
    array(no);
    for(int k=i ; k>=0 ; k--)
    {
        switch (str[k])
        {
            case 0:
                printf("Zero ");
                break;
            case 1:
                printf("One ");
                break;
            case 2:
                printf("Two ");
                break;
            case 3:
                printf("Three ");
                break;
            case 4:
                printf("Four ");
                break;
            case 5:
                printf("Five ");
                break;
            case 6:
                printf("Six ");
                break;
            case 7:
                printf("Seven ");
                break;
            case 8:
                printf("Eight ");
                break;
            case 9:
                printf("Nine ");
                break;
            default:
                printf("Plz enter a valid thing at %d place" , i+1);
        }        
    }
    return 0;
}