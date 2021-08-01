#include <stdio.h>
int len;
int i = 0;
int str[100];
int binary(int num)
{
    if (num == 1)
    {
        str[i] = 1;
        str[i + 1] = '\0';
        for (int k = i; k >= 0; k--)
        {
            printf("%d", str[k]);
            if (k == 0)
            {
                return 0;
            }
        }
    }
    else
    {
        str[i] = num % 2;
        i++;
    }
    return (binary(num / 2));
}
int main()
{
    int no;
    printf("Enter the length of number\n");
    scanf("%d", &len);
    printf("Enter the number\n");
    scanf("%d", &no);
    binary(no);
}
