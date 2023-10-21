/*Escreva uma função que receba o peso (quilos) e a altura (metros) de uma pessoa. Calcule
e retorne o IMC (Índice de Massa Corporal) dessa pessoa:   IMC = peso / (altura * altura)*/

#include <stdio.h>

float pessoa_IMC(int peso, int altura)
{
    float IMC;
    IMC = peso / (altura * altura);
    return IMC;
}

int main()
{

    int peso;
    int altura;

    printf("Digite o peso da pessoa:\n");
    scanf("%d", &peso);
    printf("Digite a altura da pessoa\n");
    scanf("%d", &altura);

    float IMC = pessoa_IMC(peso, altura);
    printf("o IMC desta pessoa é: %.2f\n", IMC);
    return 0;
}