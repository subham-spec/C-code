#include <stdio.h>
void other()
{
    int no=54;
    int *ptr=&no;
    printf("For int type : \n");
    printf("%d\n" , ptr);
    printf("%d\n" , ptr-1);

    float n=64.00;
    float *pt=&n;
    printf("For float type : \n");
    printf("%d\n" , pt);
    printf("%d\n" , pt-1);

    char a='A';
    char *p=&a;
    printf("For char type : \n");
    printf("%d\n" , p);
    printf("%d\n" , p-1);

    long na=64.00;
    long *ptra=&na;
    printf("For long type : \n");
    printf("%d\n" , ptra);
    printf("%d\n" , ptra-1);
}

void main()
{
    int no=54;
    int *ptr=&no;
    printf("For int type : \n");
    printf("%d\n" , ptr);
    printf("%d\n" , ptr+1);

    float n=64.00;
    float *pt=&n;
    printf("For float type : \n");
    printf("%d\n" , pt);
    printf("%d\n" , pt+1);

    char a='A';
    char *p=&a;
    printf("For char type : \n");
    printf("%d\n" , p);
    printf("%d\n" , p+1);

    long na=64.00;
    long *ptra=&na;
    printf("For long type : \n");
    printf("%d\n" , ptra);
    printf("%d\n" , ptra+1);
    other();
}
