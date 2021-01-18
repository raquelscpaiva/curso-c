#include <stdio.h>

int main(int argc, char *argv[])
{
	int idade = 5;
	
	if(idade < 14)
	{
		printf("Crianca\n");
	}
	else if(idade >= 14 && idade < 18)
	{
		printf("Adolescente\n");
	}
	else if(idade >= 18 && idade < 60)
	{
		printf("Adulto\n");
	}
	else
	{
		printf("Velho\n");
	}
	
	return 0;
}