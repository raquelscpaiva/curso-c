// função para modificar o inteiro

#include <stdio.h>

void f(int *idade)
{ 
    *idade = 20;
}

int main()
{
    int idade = 10;

    f(&idade);

    printf("%d\n", idade);

    return 0;
}