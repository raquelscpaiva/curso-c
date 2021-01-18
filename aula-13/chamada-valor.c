#include <stdio.h>

void f(int vet[])
{
    vet[0] = 100;
}

int main()
{
    int vet[] = {1,2,3,4};

    f(vet);

    printf("%d\n", vet[0]);

    return 0;
}

