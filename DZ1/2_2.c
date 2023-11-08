#include <stdio.h>
#include <stdlib.h>

#define MAS_SIZE 20

int main()
{
    int x[MAS_SIZE];
    x[0] = 1;

    for (int i = 1; i <= MAS_SIZE; i++)
    {
        x[i] = x[i - 1] * 2;
        printf("%d ", x[i]);
    }


    return 0;
}
