#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *p;
	int n,i;
	n=5;
	printf("Enter the number of elements %d\n", n);
	p=(int*)malloc(n * sizeof(int));
	if(p==NULL)
	{
		printf("Allocation unsuccessful\n");
	}
	else
	{
		printf("Allocation successful\n");
		for(i=0; i<n; i++)
		{
			p[i]=i+1;
		}
		printf("Elements of the array are\n");
		for(i=0; i<n; i++)
		{
			printf("%d  ", p[i]);
		}
	}
}