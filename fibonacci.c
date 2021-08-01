#include <stdio.h>
int main()
{
    int p,q,r,a;
        p=0; q=1;
    printf("Enter no of terms you got by fibonacci\n");
    scanf("%d" , &a);
    int i=1;
    while(i<=a)
    {
        if(a==1)
        {
            printf("0");
        }
        else if(a==2)
        {
            printf("%d %d " , p , q);
        }
        else
        {
            printf("%d  " , p);
            r=p;
            p=q;
            q=p+r;
        }
        i++; 
    }
    return 0;
}