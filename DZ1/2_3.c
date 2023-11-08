#include <stdio.h>
#include <stdlib.h>

#define MAS_SIZE 15

int main()
{
    float x[MAS_SIZE];
    x[0] = 1.0;

    for (int i = 1; i <= MAS_SIZE; i++)
    {
        x[i] = (float) (x[i - 1] / 2);
        printf("%.15f ", x[i]);
    }


    return 0;
}
