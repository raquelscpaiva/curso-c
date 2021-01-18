/*um endereço de um objeto é o endereço do seu primeiro byte
o ponteiro (um tipo especial de variável) é um apontador que armezane endereços - NULL constante com valor 0 */

#include <stdio.h>

int main()
{
    int idade = 10;
    int *p; //p é um ponteiro para inteiro

    p = &idade; // o valor de p é o endereço da variável idade

    //*p = 20;

    printf("%d\n", *p);

    return 0;
}
