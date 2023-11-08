#include <stdio.h>

void func(char name[])
{
	char *mas = name;
	if ((*mas) >= 'a' && (*mas) <= 'z') printf("%c", (*mas) - 32 );
	else{printf("%c", (*mas));}

	for(mas = name+1; *mas != '\0'; mas++)
	{
		if ((*mas) >= 'A' && (*mas) <= 'Z') printf("%c", (*mas) + 32);
		else{printf("%c", (*mas));}

	}

}

int main()
{	
	char mas[] = "adSDFGhgg";
	func(mas);
	
	return 0;

}
