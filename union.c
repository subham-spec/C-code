#include <stdio.h>

// union student       //Defining of a student union
// {
//     int sr_no;      //Defing of variable to store data            
//     int id;         //Defing of variable to store data
//     int class;      //Defing of variable to store data
// };
// void main()
// {
//     union student subhi;
//     subhi.sr_no= 6600;      
//     subhi.id = 1122;        
//     subhi.class= 13;        //Only the last value is secured
    
//     printf(" The sr no of subhi is %d\n ", subhi.sr_no);
//     printf(" The id of subhi is %d\n", subhi.id);
//     printf(" The class of subhi is %d\n", subhi.class);

// }
struct student       //Defining of a student union
{
    int sr_no;      //Defing of variable to store data            
    int id;         //Defing of variable to store data
    int class;      //Defing of variable to store data
};
void main()
{
    struct student subhi;
    subhi.sr_no= 6600;      
    subhi.id = 1122;        
    subhi.class= 13;        // All the uppper 3 values get printed correctly....
    
    printf(" The sr no of subhi is %d\n ", subhi.sr_no);
    printf(" The id of subhi is %d\n", subhi.id);
    printf(" The class of subhi is %d\n", subhi.class);

}