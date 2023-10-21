/*escreva uma função que receba por parametro dois numeros e retorne o maior deles*/

#include <stdio.h>

/*recebar dois parametros*/
int maior(int a, int b)
{
    if (a > b) /*se a é maior que b*/
    {
        return a; /*deve retornar o parametro a*/
    }
    else /*se não for a maior retornar b*/
    {
        return b;
    }
}
/*-trazer os numeros para definir quais seram digitados*/
int main()
{

    int numero1, numero2;

    /*digitar os numeros e retornar*/
    printf("digite dois numeros inteiros");
    scanf("%d %d", &numero1, &numero2);

    /*perguntar qual dos numeros é maior*/
    int resultado = maior(numero1, numero2);

    /*imprimir o maior numeros*/
    printf("o maior numero é: %d\n", resultado);

    return 0;
}

/*Nesse exemplo, a função maior recebe dois números a e b como par main), você lê dois números do usuário, chama a função maior maior para determinar o maior número e, em
Você pode adaptar essa função para trabalhar com diferentes tipos de float ou double, simplesmente ajustando o tipo de retorno e os tipos dos parametros*/
