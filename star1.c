#include <stdio.h>
int upper(int r1)
{
	for(int i=1 ; i<=r1 ; i++)
	{
		for(int j=1 ; j<=i ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

int lower(int r1)
{
	for(int i=1 ; i<=r1 ; i++)
	{
		for(int j=1 ; j<=r1-i+1 ; j++)
		{
			printf("* ");
		}
		printf("\n");
	}
}

int main()
{
	int rows, ch;
	printf("Enter the no of rows you have to print\n");
	scanf("%d" , &rows);
	now:
	printf("What do u want\n 1 for upper triangle\n 2 for reversed triangle\n");
    scanf("%d" , &ch);
	switch (ch)
	{
		case 1:
		upper(rows);
		break;
		
		case 2:
		lower(rows);
		break;
		
		default:
		printf("Enter a valid no\n");
		goto now;
	}
	return 0;
}