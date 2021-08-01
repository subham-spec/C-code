#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;
void sort_by_area(triangle* tr, int n) {
	int s[n],p[n],temp[3],min;
    float Area[n];
    for(int i = 0; i < n; i++)
    {
        p[i] = (tr[i].a + tr[i].b + tr[i].c) * 0.5;
        Area[i] = p[i]*(p[i]-tr[i].a)*(p[i]-tr[i].b)*(p[i]-tr[i].c);
        s[i] = sqrt(Area[i]);
    }
    for(int i = 0; i < n; i++)
    {
        min = i;
        for (int j = i+1; j < n; j++)
        if(s[j] < s[min])
        {
            min = j;
            temp[0] = tr[i].a;
            temp[1] = tr[i].b;
            temp[2] = tr[i].c;
            tr[i].a = tr[min].a;
            tr[i].b = tr[min].b;
            tr[i].c = tr[min].c;
            tr[min].a = temp[0];
            tr[min].b = temp[1];
            tr[min].c = temp[2];
        }
    }
}

int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}