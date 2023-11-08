#include <stdio.h>
#include <string.h>

#define size 4

typedef union uni
{
	unsigned int a;
	unsigned char mas[size];
} Uni;

void proc(Uni *unio)
{
	char tmp = unio->mas[0];
	unio->mas[0] = unio->mas[1];
	unio->mas[1] = tmp;

	tmp = unio->mas[2];
	unio->mas[2] = unio->mas[3];
	unio->mas[3] = tmp;
}

int main(int argc, char *argv[])
{
	Uni Exampl;
	Exampl.a = 1234567;
	strcpy(Exampl.mas,"1234");

	proc(&Exampl);
	printf("%d %s\n", Exampl.a, Exampl.mas);
	return 0;
}
