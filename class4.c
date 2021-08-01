#include <stdio.h>
int main()
{ 
    int no,k=0,item,qty,bill=0;
    printf("First enter how many types of items you have to buy\n");
    scanf("%d" , &no);
    again:
    printf("Choose what you have to buy now\n\n1 for Burger\n2 for fries\n3 for pepsi\n4 for pizza\n");
    scanf("%d", &item);
    switch (item)
    {
        case 1:
            printf("\nEnter the quantity of BURGER\n");
            scanf("%d", &qty);
            bill=bill+qty*200;
            break;
        case 2:
            printf("\nEnter the quantity of FRIES\n");
            scanf("%d", &qty);
            bill=bill+qty*70;
            break;
        case 3:
            printf("\nEnter the quantity of pepsi\n");
            scanf("%d", &qty);
            bill=bill+qty*100;
            break;
        case 4:
            printf("\nEnter the quantity of PIZZA\n");
            scanf("%d", &qty);
            bill=bill+qty*150;
            break;
        default:
            printf("Your choice is invalid\n Please follow the path");
    }
    k+=1;
    if(k<no)
    {
        goto again;
    }
    else
    {
        printf("Your net bill is = %d" , bill);
    }
    return 0;
}






