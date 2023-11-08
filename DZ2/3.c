#include <stdio.h>

void func(char name[])
{
	char *mas;
	for(mas = name; *mas != '\0'; mas++)
	{
		if ((*mas) >= 'a' && (*mas) <= 'z') printf("%c", ((*mas) + 'A' - 'a'));
		else{printf("%c", (*mas));}

	}
}

int main()
{	
	char mas[] = "tqewr";
	func(mas);
	
	return 0;

}
