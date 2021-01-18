#include <stdio.h>
#include <string.h>

struct pessoa
{
    char nome[100];
    int idade;
    float peso;
};

int main()
{
    struct pessoa p;

    strcpy(p.nome, "Raquel Siqueira");
    p.idade = 31;
    p.peso = 80.5;

    printf("Nome: %s\n", p.nome);
    printf("Idade: %d\n", p.idade);
    printf("Peso: %f\n", p.peso);

    return 0;
}
