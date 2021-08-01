#include <stdio.h>
int str[10] , i=0 , no , p;
void array(int n)
{
    while(no>10)
    {
        no=n/10;
        str[i]=n%10;
        i++;
        array(no);
        return;
    }
    str[i]=no;
    str[i+1]='\0';
    return ;
}
int main()
{
    printf("Enter the number");
    scanf("%d" , &no);
    array(no);
    for(int k=i ; k>=0 ; k--)
    {
        printf("%d ", str[k]);
        p=p+str[k];
        if(k!=0)
        {
            printf(" + ");
        }
    }
    printf(" = %d", p);
    return 0;
}