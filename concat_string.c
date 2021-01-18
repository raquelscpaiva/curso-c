#include <stdio.h>
#include <string.h>

int main ()
{
    char nome [] = "Raquel ";
    char sobrenome [] = "Siqueira";

    strcat(nome, sobrenome);

    printf("%s\n", nome);

    return 0;
}