#include<stdio.h>

int main(int argc, char const *argv[])
{
    int matz [2] [2];
    matz [0][0] = 1;
    matz [0][1] = 2;
    matz [1][0] = 3;
    matz [1][1] = 4;
    
    int i, j;

    for(i = 0; i < 2; i++)
    {
        for(j = 0; j < 2; j++)
        {
            printf("%d\t", matz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
