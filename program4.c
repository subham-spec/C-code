#include <stdio.h>
void main()
{
    int no, b, i=0,z=0, p;
    printf("Enter the length of your number:- \n");
    scanf("%d" , &p);
    int arr[p-1];
    printf("Enter the number \n");
    scanf("%d" , &no);
    while(no>0)
    {
        b=no%10;
        if(b!=9 && z==0)
        {
            arr[i]=b+1;
        }
        else if(b==9)
        {
            arr[i]=0;
            z=1;
        }
        else
        {
            arr[i]=b+2;
            z=0;
        }
        no=no/10;
        i++;
    }
    for(int i=p-1 ; i>=0 ; i--)
    {
        printf("%d" , arr[i]);
    }
}

