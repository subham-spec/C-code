#include <stdio.h>
#include <stdlib.h>

void main()
{
	int no;
	printf("Enter the no of quantities\n");
	scanf("%d", &no);
	int *p;
	p=(int *)calloc(no , sizeof(int));
	if(p == NULL)
	{
		printf("Allocation Unsuccessful\n");
	}
	
	else
	{
		printf("Allocation successful\n");
		printf("Now enter the values one by one\n");
		for(int i=0 ; i<no ; i++)
		{
			printf("Enter %d value\n", i+1);
			scanf("%d", &p[i]);
		}
		printf("\nThe values are\n");
		for(int i=0 ; i<no ; i++)
		{
			printf("%d\n", p[i]);
		}
	}
	
}	