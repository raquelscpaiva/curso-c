#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c = getchar();
    int cont = 0;

    while(c !=EOF)
    {
        cont++;
        c = getchar();
    }
    printf("Quantidade: %d\n", cont);
    
    return 0;
}
