#include <stdio.h>
float k=0;
float series(int n)
{
    for( int i=1 ; i<=n ; i++)
    {
        k=k+1.0/i;
    }
    return k;
}
void main()
{
    int no;
    printf("Enter the number of terms\n");
    scanf("%d" , &no);

    float result = series(no);
    printf("The sum of series you entered is %f" , result);
}
