#include<stdio.h>
#include<conio.h> 
int main() 


{   
    printf("Enter the no of rows");
    int rows;
    scanf("%d" , &rows);
    int i, space, star=0;
     
    for(i = 1; i <= rows; i++) 
	{
        for(space = 1; space <= rows-i; space++) 
		{
           	printf(" ");
        }
        while(star != (2*i - 1)) 
		{
            if(star == 0 || star==2*i-2)
        	    printf("*");
            else
                printf(" ");
                star++;
        }
        star=0;
        printf("\n");
    }
    rows--;
    
    for(i = rows;i >= 1; i--) 
	{
        
        for(space = 0; space <= rows-i; space++) 
				{
           			printf(" ");
        		}
        star = 0;
        while(star != (2*i - 1)) 
				{
         			if(star == 0 || star==2*i-2)
                	printf("*");
            		else
                	printf(" ");
            		star++;
        		}
        printf("\n");
    }
 
    return 0;
}
