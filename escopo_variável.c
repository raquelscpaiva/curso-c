#include <stdio.h>

int num = 10;

void f()
{
    printf("%d\n", num);
}

int main ()
{
    f();
    printf("%d\n", num);

    return 0;

}