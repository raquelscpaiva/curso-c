//do while executa pelo menos uma vez, já que o teste do laço só acontece no final
#include <stdio.h>

int main (int argc, char *argv[])
{
    int vez = 200;

    do
    {
        printf("%d - Testando o laço do while\n", vez);
        vez++;
    }
    while (vez <= 100);

    return 0;

}


