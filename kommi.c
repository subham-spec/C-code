#include<stdio.h>
int main()
{
    int a,b;        //variable to get value from user
	printf("Enter the two numbers \n");
    scanf("%d %d" , &a, &b);
    for(a ; a<=b ; a++)
    {
        if(a%2==0)
        {
            printf("Even number is %d\n" , a);
        }
    }
    return 0;
}
