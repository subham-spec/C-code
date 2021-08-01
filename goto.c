#include <stdio.h>
#include <string.h>
int main(){
    
    char any[23];
    for(int i=0 ; i<8 ; i++){
        printf("%d", i);
        for(int j=0 ; j<8 ; j++){
            printf("\nEnter anything and if u entered a negative then u go out\n");
            scanf("%s", &any);
            if(any[1]=="-"){
                printf("Now u have entered a negative thing\n So u are removed from the loop");
                goto end;
            }
        }
    }
    end:

    return 0;
}

