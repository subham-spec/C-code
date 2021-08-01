#include <stdio.h>

void main()
{
	int no,sum,k;
	printf("Enter the number:\n");
	scanf("%d", &no);
	int i=no;
	while(no>0)
	{
		if(no/10==0 || no==i)
		{
			k=no%10;
			sum +=k;
		}
		no /= 10;
	}
	printf("The sum of 1st and last is : %d",sum);
}