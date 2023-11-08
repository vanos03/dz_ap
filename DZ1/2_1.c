#include <stdio.h>
#include <stdlib.h>

#define MAS_SIZE 3

int main()
{
    char x[] = "123", y[] = "456", z[MAS_SIZE*2];

    for (int i = 0; i < MAS_SIZE; i++)
    {
        z[i % 3] = x[i];
        z[i % 3 + 3] = y[i];
    }

    printf("%s\n", z);



    return 0;
}
