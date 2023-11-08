#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FIFTY 20

int main()
{
    srand(time(NULL));
    unsigned int x[FIFTY], y[FIFTY];

    for (int i = 0; i < FIFTY; i++)
    {
        x[i] = (unsigned int) rand() % 100;
        y[i] = (unsigned int) rand() % 100;
        printf("%d ", x[i] + y[i]);
    }



    return 0;
}
