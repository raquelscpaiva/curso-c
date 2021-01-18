#include <stdio.h>

float media (float n1, float n2)
{
    float result;

    result = (n1 + n2) / 2;

    return result;
}

int main()
{
    float r;

    r = media (90, 75);

    printf("%f\n", r);

    return 0;
}

