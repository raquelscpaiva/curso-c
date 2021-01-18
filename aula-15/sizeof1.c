#include <stdio.h>
int main(void)
{
  float vteste;
  printf(" --- TIPO ---|--- BYTES ---\n");
  printf(" char .......: %ld bytes\n", sizeof(char));
  printf(" short.......: %ld bytes\n", sizeof(short));
  printf(" int.........: %ld bytes\n", sizeof(int));
  printf(" long........: %ld bytes\n", sizeof(long));
  printf(" float ......: %ld bytes\n", sizeof(float));
  printf(" double......: %ld bytes\n", sizeof(double));
  printf(" long double.: %ld bytes\n\n", sizeof(long double));
  printf("\nO tamanho de vteste e...: %ld \n\n",sizeof vteste);
  
  return 0;
}