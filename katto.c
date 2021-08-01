#include <stdio.h>
int main()
{
    int no[9]= {98 , 56 , 57 , 23 , 5 , 9 , 45 , 35 , 222 , 15};

    for(int i = 1 ; i<10 ; i++)
    {
        if(no[i]< no[0])
        {
            int j=no[0];
            no[0]=no[i];
            no[i]=j;
        }
    }
    for(int i=0 ; i<10 ; i++)
    {
		printf("%d ", no[i]);
    }
    printf("\nSmallest of the no is  %d ", no[0]);
    return 0;
}