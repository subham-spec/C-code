#include <stdio.h>
#include <math.h>
int main()
{
    printf("Enter the range of number : ");
	int a,b;
	scanf("%d%d",&a,&b);
	int i=0;
	for(int i=a; i<=b; i++){
		for(int j=2; j<sqrt(i); j++){
			if(i%j==0){
				i=1;
				break;
			}
		}
		if(i==0){
			printf("%d ",i);
		}
		i=0;
	}

    return 0;
}