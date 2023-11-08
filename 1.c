#include <stdio.h>

#define size 256

int main(int argc, char *argv[])
{
	FILE *file = fopen(argv[1], "r");

	if (file != NULL)
	{
		int mas[size];
		int c;

		for (int i = 0; i < size; i++)
			mas[i] = 0;

		while (	(c = (int)fgetc(file)) != EOF)
			mas[c]++;

		for (int i = 0; i < size; i++)
			if (mas[i] > 0) printf("%c %d\n", i, mas[i]);
	}

	fclose(file);

	return 0;
}
