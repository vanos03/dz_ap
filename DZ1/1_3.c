#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FIFTY 10

int main()
{
    srand(time(NULL));
    unsigned long x[FIFTY], y[FIFTY];

    for (int i = 0; i < FIFTY; i++)
    {
        x[i] = (unsigned long) rand() % 100;
        y[i] = (unsigned long) rand() % 100;
        printf("%.2ld ", x[i] * y[i]);
    }



    return 0;
}
