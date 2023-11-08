#include <stdio.h>

int func(int *a, int *b)
{
	*a *= *b;
	return 0;
}

int main()
{
	int a = 5, b = 8;

	func(&a, &b);

	printf("%d\n", a);
	
	return 0;

}
