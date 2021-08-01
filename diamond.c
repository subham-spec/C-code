#include <stdio.h>
int main()
{
    printf("Enter the no of rows");
    int row;
    int spc=0;
    int z;
    scanf("%d", &row);
        for (int i=1 ; i<=row ; i++)
        {
           for(int k=i ; k<=row ; k++)
           {
                if(k==row)
                {
                printf("*");
                }
                else
                {
                printf(" ");          
                }
           }
            for(spc=0 ; spc <2*(i-1); spc++)
            {
                if(spc==2*(i-1)-1)
                {
                printf("*");
                }
                else
                {
                printf(" "); 
                }
            }
            printf("\n");
        }
        for(int i=row ; i>0 ; i--)
        {
            if(i!=row)
            {
                for(int j=i ; j<=row ; j++)
            {
                if(j==row)
                {
                printf("*");
                }
                else
                {
                printf(" ");
                }
            }
            for(spc=0 ; spc <2*(i-1); spc++)
            {
                if(spc==2*(i-1)-1)
                {
                printf("*");
                }
                else
                {
                printf(" "); 
                }
            }
            printf("\n");
            }
        }   
}
