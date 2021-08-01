#include <stdio.h>
#include <stdlib.h>

void main()
{
	int *sub,no,sum;
	
    printf("Enter the number of the subject you have: \n");
	scanf("%d", &no);
	sub=realloc(sub, no * sizeof(int));
	printf("Now enter the values one by one :\n");
	for(int i=0 ; i<no ; i++)
	{
		scanf("%d", &sub[i]);
		sum +=sub[i];
		// printf("%d\n",sum);
	}
	printf("Your aggregrate marks are: %d", sum/no);
	
}
