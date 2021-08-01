#include <stdio.h>
int result(int n1, int n2)
{
	int temp=n1;
	n1=n1+n2;
	n2=temp-n2;
	printf("The final numbers are a = %d and b= %d" , n1 , n2);
	return 0;
}
int main()
{
	int a,b;
	printf("Enter the numbers one by one");
	scanf("%d%d", &a , &b);
	result(a,b);
}