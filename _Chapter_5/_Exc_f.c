#include <stdio.h>

int main(){
    float a, b, c, soma, resultado;
    printf("Digite dois números para serem somados: \n");
    scanf("%f%f", &a, &b);
    soma = a + b;
    printf("A soma entre %f e %f foi %f \n", a, b, soma);
    printf("Agora digite um número pra que seja subtraido: \n");
    scanf("%f", &c);
    resultado = soma - c;
    printf("O resultado da subtração de %f por %f foi %f. ", soma, c, resultado);
    return 0;
}