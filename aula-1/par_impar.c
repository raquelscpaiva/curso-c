//Verificar se o número é par ou ímpar em C
#include <stdio.h>
int main(void)
{
    int n1, resto;

    printf("\nDigite um número:");
    scanf("%d", &n1);

    resto = n1 % 2;
    printf("O resto da divisão é %d", resto);

    if (resto == 0 )
        printf("\nO numero %d é par. \n",n1);
    else 
        printf("\nO numero %d é impar. \n",n1);

return 0; 
}
