#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define FIFTY 15

int main()
{
    srand(time(NULL));
    float x[FIFTY], y[FIFTY];

    for (int i = 0; i < FIFTY; i++)
    {
        x[i] = (float) (rand() % 10000)/100;
        y[i] = (float) (rand() % 10000)/100;
        printf("%.2f ", x[i] - y[i]);
    }



    return 0;
}
