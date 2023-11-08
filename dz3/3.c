#include <stdio.h>
#include <math.h>

typedef struct Point
{
	int x, y;
} pole;

double line(pole *p1, pole *p2)
{
//	printf("%d %d\n%d %d\n", p2->x, p2->y, p1->x, p1->y);
	return sqrt((double)((p2->x - p1->x)*(p2->x - p1->x) + (p1->y - p2->y)*(p2->y - p1->y)));
}


int main(int argc, char *argv[])
{
	pole p1 = {1, 2}, p2 = {9, 9};
	printf("%.2f\n", line(&p1, &p2));

	return 0;
}
