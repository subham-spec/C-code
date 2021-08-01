#include <stdio.h>
int main(){
    printf("Enter the no of colums or rows you have to print");
    int k;
    scanf("%i" , &k);

    for(int i=k ; i>0 ; i--){
        for(int j=1 ; j<=i ; j++){
            printf("* ");
        }
        printf("\n");
    }

}


