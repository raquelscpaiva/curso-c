#include <stdio.h>

int main (void )
{
  int numero;
  
  printf("Digite um numero: ");
  scanf("%d",&numero);
  
  numero >= 0 ? numero++ : numero--;
  
  printf("O novo valor de numero é: %d\n",numero);
  
return(0);
}