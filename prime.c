#include <stdio.h>
int main()
{
   int i;
   printf("Enter the number");
   scanf("%d" , &i);
   if(i==1)
   {
      printf("The given not is not prime ");
   }
   if(i==2)
   {
      printf("The given is not prime ");
   }
   for(int j=2; j<i/2 ; j++)
   {
      if(i%j==0)
      {
         printf("The number is not prime");
         goto last;
      }
   }
   printf("The number is prime");
   last:
   return 0;
}



