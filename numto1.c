#include <stdio.h>
void main()
{
    int no, x, count=0;
    printf("Enter the number\n");
    scanf("%d" , &no);    
    for(int j=1 ; j<=no ; j++)
    {
        int i=j;
        while(i!=0)
        {
            x=i%10;
            i/=10;
            if(x==1)
                ++count;
        }
    }
    printf("%d" , count);
}
