#include <stdio.h>
int main()
{
    int no , p , k;
    printf("Enter the number");
    scanf("%d" , &no);
    for(int i=1 ; ; i++)
    {
        k=no%10;
        p=no/10;
        no=p;
        printf("%d" , k);
        if(p==0)
        break;
    }
    return 0;
}



