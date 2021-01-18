#include <stdio.h>
int main(void)
{
    int valor1, valor2;
    int resp_soma, resp_sub, resp_multi, resp_divi;

    printf("Testando operadores aritmeticos\n\n");

    printf("Digite o primeiro valor: ");
    scanf("%d", &valor1);

    printf("Digite outro valor: ");
    scanf("%d", &valor2);

    resp_soma = valor1 + valor2;
    printf("\nSoma = %d\n", resp_soma);

    resp_sub = valor1 - valor2;
    printf ("\nSubtracao = %d\n", resp_sub);

    resp_multi = valor1 * valor2;
    printf("\nMultiplicacao = %d\n", resp_multi);

    resp_divi = valor1 / valor2;
    printf("\nDivisao = %d\n\n", resp_divi);


    return(0);

}