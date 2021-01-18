#include <stdio.h>

int main(int argc, char const *argv[])
{
    char c;

    c = getchar(); //getchar para pegar cada caracter do arquivo

    while (c != EOF) // EOF = end of file - constante simbólica
    {
        putchar(c); // imprimiu os caracteres atraves do putchar
        c = getchar();
    }

    return 0;
}
