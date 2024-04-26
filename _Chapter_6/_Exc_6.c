#include <stdio.h>

int main()
{
    float base, altura, area;
    printf("Insira a base e a altura do triangulo para obter a sua área!: \n");
    scanf("%f%f", &base, &altura);
    area = (base * altura) / 2;
    printf("A área do tringulo é %f. \n", area);
    return 0;
}