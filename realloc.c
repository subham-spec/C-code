#include <stdio.h>
#include <stdlib.h>

void main()
{
	int no, i=0;
	printf("Enter the no of quantities\n");
	scanf("%d", &no);
	
	int *p , *ptr;
	p=realloc(ptr, no * sizeof(int));
	if(p == NULL)
	{
		printf("Allocation Unsuccessful\n");
	}
	
	else
	{
		printf("Allocation successful\n");
		printf("Now enter the values one by one\n");
		for( ; i<no; i++)
		{
			scanf("%d", &p[i]);
			// printf("%d\n", p[i]);
		}
		printf("The values are\n");
		for(int j=0; j<no; j++)
		{
			printf("%d\n", p[j]);
		}
	}
}