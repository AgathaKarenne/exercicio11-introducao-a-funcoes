/*Escreva uma função para o cálculo do volume de uma esfera em que π = 3.1414592 valor do raio r deve ser passado por parâmetro.
  V = 4 / 3 π * r ^ 3*/

#include <stdio.h>
#include <math.h>

float esfera_V(int r)
{

    float V;
    double pi = 3.1414592;
    V = 4 / 3 * pi * r * r * r;
    return V;
}
int main()
{

    int r;

    printf("digite o raio de uma esfera\n");
    scanf("%d", &r);

    float V = esfera_V(r);
    printf(" o volume de uma esfera é: %2.f\n", V);
    return 0;
}
