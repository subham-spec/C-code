
#include <stdio.h>
#include <string.h>
int main()
{
  char a[10]='monday';
  
  switch(a){
      case 'monday':
      printf("its ur physics paper");
      break;
      
      case 'tuesday':
      printf("its ur maths paper");
      break;
      
      case 'w':
      printf("its ur cs paper");
      break;
      
      case 'y':
      printf("its ur chem paper");
      break;
      
      default:
      printf("u r free");
      }
      
      return 0;
}
