#include <stdio.h>
int main()
{
    int a,b,p,f,s,bill=0;
    char ch;
    
    printf("1 Burger\n2 Pizza\n3 French Fires\n4 sanwiches");
    printf("\nEnter your choice (Please select option from 1 to 4)");
    scanf("%d", &ch);                
    
    switch (ch)                    
    {
        case 1:                    
        printf("Your order is Burger\n");
        printf("Enter quantity\n");
        scanf("%d", &b);             
        bill=bill+200*b;
        break;
        
        case 2:
        printf("Your order is Pizza\n");
        printf("Enter quantity\n");
        scanf("%d", &p);
        bill=bill+500*p;
        break;
        
        case 3:
        printf("Your order is French Fries\n");
        printf("Enter quantity\n");
        scanf("%d", &f);
        bill=bill+50*f;
        break;
        
        case 4:
        printf("Your order is sanwiches\n");
        printf("Enter quantity\n");
        scanf("%d", &s);
         bill=bill+150*s;
        break;
        
        default:
        printf("Your choice is invalid\n");   
    }
    printf("Did u want to purchase more:--\n 1 for yes \n 0 for no");
    scanf("%d" , &a);
    if(a==1){
        printf("1 Burger\n2 Pizza\n3 French Fires\n4 sanwiches");
        printf("\nEnter your choice (Please select option from 1 to 4)");
        scanf("%d", &ch);                
    
    switch (ch)                    
    {
        case 1:                    
        printf("Your order is Burger\n");
        printf("Enter quantity\n");
        scanf("%d", &b);             
        bill=bill+200*b;
        break;
        
        case 2:
        printf("Your order is Pizza\n");
        printf("Enter quantity\n");
        scanf("%d", &p);
        bill=bill+500*p;
        break;
        
        case 3:
        printf("Your order is French Fries\n");
        printf("Enter quantity\n");
        scanf("%d", &f);
        bill=bill+50*f;
        break;
        
        case 4:
        printf("Your order is sanwiches\n");
        printf("Enter quantity\n");
        scanf("%d", &s);
         bill=bill+150*s;
        break;
        
        default:
        printf("Your choice is invalid\n");   
    }
        }
         printf("Total bill is:%d" , bill);
    return 0;
}
    

