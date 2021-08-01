#include <stdio.h>
void main()
{
	int a=10;
	int b=5;
	int *ptr1=&a;
	int *ptr2=&b;
	
	if(ptr1<ptr2)
	{
		printf("Hello subham I am in true condition:\n\n");
	}
	else
	{
		printf("Heloo subham I am in false condition:\n\n");
	}
	
	int c=10;
	int d=15;
	int *ptr3=&a;
	int *ptr4=&b;
	printf("The new value in *ptr3 is %d\n", ptr3);
	printf("The new value in *ptr3 is %d\n", ptr4);
	ptr3 = *ptr3 + *ptr4;
	
	printf("The new value in *ptr3 is %d\n\n", ptr3);
	
	printf("The new value in first part is %d\n", *ptr3);
	ptr3++;
	printf("The new value in first part is %d\n\n", *ptr3);
}
