#include <stdio.h>

int main(){
    float a, b, c, d, produto;
    printf("Digite quatro números para obeter o produto entre eles: \n");
    scanf("%f%f%f%f", &a, &b, &c, &d);
    produto = (a *b *c * d);
    printf("O produto entre %f, %f, %f, %f é %f", a, b, c ,d ,produto);
    return 0;
};