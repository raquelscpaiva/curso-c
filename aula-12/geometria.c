#define PI 3.141592
#include "geometria.h"

float area_quad(float lado)
{
    return lado * lado;
}

float area_circulo(float raio)
{
    return PI * raio * raio;
}

float area_ret(float base, float altura)
{
    return base * altura;
}