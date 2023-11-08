#include <stdio.h>


int main()
{
	char c, mas[12];
	int i = 0;
	while(i < 12)
	{
		scanf("%c", &c);
		if (c >= 'A' && c <= 'Z') 
		{
			mas[i] = c;
			i++;
		}
	}

	printf("%s\n", mas);


	return 0;

}
