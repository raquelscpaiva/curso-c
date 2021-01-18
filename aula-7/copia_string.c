#include <stdio.h>
#include <string.h>

int main ()
{
    char nome [100]; 
    char aux[] = "Raquel";

    strcpy(nome, aux);

    printf("%s\n", nome);

    return 0;
}