#include <stdio.h>
#define PI 3.14

int main(int argc, char *argv[])
{
    float R = 7;
    float area;

    area = PI * R * R;

    printf("%f\n", area);

    return 0;
}