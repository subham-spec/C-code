/* type defining format
    typedef <main_name> <name_u_want_to_give>
*/
#include <stdio.h>
// first example
typedef struct data
{
    int roll_no;
    int class;
    char name[30];
} panditji; // Now we can type panditji on the place of the struct data
int main()
{
    panditji subhi, abhinav;
    subhi.roll_no= 99;
    subhi.class= 13;

    abhinav.roll_no= 99;
    abhinav.class= 13;

    // second example 
    typedef int subham; // Here subham is declaired to int i.e we can type subham in the place of int
    subham subh = 453;
    printf("%d" , subh);

    return 0;
}