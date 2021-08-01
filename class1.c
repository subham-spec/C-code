
  #include <stdio.h>
int main()
{

    int pay;
    int qty;
    char ch;
    
    printf("\n What u have to buy press\n 'B' for Burger\n 'F' for French Fries\n 'P' for Pizza \n 'S' for Sandwich");
    scanf("%c", &ch);     
    
    printf("\nEnter the quantity u have to buy\n");
    scanf("%i" , &qty);
    switch (ch)       
    {
        case 'B' :        
        pay=qty*264;
        break;
        
        case 'S' :
        pay=qty*100;
        break;
        
        case 'P' :
         pay=qty*73;
        break;
        
        case 'F' :
         pay=qty*28;
        break;
        
        default:
        printf("\n You have to choose either S or F or B or P");
         
    }
        printf("\n You have to pay%d :--", pay);
    return 0;
    
}


