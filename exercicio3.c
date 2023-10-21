/*escreva uma função que receba por parametro uma temperatura em graus fahrenheit e a retorne convertida em celsius. a formula de conversão e
C = (F - 32.0) * (5.0/9.0), sendo F a temperatura em fahrenheit e C a temperatura em celsius */

#include <stdio.h>
#include <conio.h>

int temperatura(int F)
{

    int C;
    C = (F - 32.0) * (5.0 / 9.0);
    return (C);
}
int main(void)
{

    int F, C;

    printf("digite a temperatura em fahrenheit:\n");
    scanf("%d", &F);

    C = temperatura(F - 32.0) * (5.0 / 9.0);

    printf("C = %d\n", C);

    getch();
    return 0;
}