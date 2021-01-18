#include<stdio.h>

int main(void)
{
    char nome[11]; //string é uma variável que armazena uma cadeia de caracteres

    printf("Digite seu nome:"); 
    //scanf("%s", nome); //pára sempre que houver espaço - problema na leitura com mais de 1 palavra

    fgets(nome,11,stdin); //leitura da string

    printf("O nome armazenado foi: %s", nome);
    return 0;
}