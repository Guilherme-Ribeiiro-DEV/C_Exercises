#include <stdio.h>

int main()
{
    float number1, number2;
    printf("Insira quais números você deseja calcular!: ");
    scanf("%f %f", &number1, &number2);
    float mult, div, soma, sub;
    mult = number1 * number2;
    div = number1 / number2;
    soma = number1 + number2;
    sub = number1 - number2;
    printf("Resultado das operações: \n%f\n%f\n%f\n%f", mult, div, soma, sub);
    return 0;
}