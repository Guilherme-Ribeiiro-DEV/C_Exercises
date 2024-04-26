#include <stdio.h>
#include <math.h>

float wheight, height, imc;

int main()
{
    printf("Insira o seu peso e a sua altura!: \n");
    scanf("%f%f", &wheight, &height);
    imc = wheight / pow(height, 2);
    printf("Seu IMC atual é: %f\n", imc);
    return 0;
}