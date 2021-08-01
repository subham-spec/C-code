#include <stdio.h>

int main()
{
int a, b;
 printf("Enter the data as asked\n");
 printf("1. Enter 1 if you are using laptop\n"); 
 printf("2. Enter 2 if you are using mobile\n"); 
 printf("3. Enter 3 if you are using tab\n"); 
 printf("4. Enter 4 if you are not using above of them\n");
 
 scanf("%i" ,&a );
 
 printf("\n1. Enter 1 if you are using mobile data\n"); 
 printf("2. Enter 2 if you are using wifi\n"); 
 printf("3. Enter 3 if you are using none\n");  
 
 scanf("%i" ,&b );

 if((a==1 || a==2 || a==3) && (b==1 || b==2)){
    printf("\nYou can able to attend the class via online mode\n");    
 }
 else
 {printf("\nYou cann't attend via online mode");}
 return 0;
}

