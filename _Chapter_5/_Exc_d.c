#include <stdio.h>

int main() {
    float num1, num2, num3, num4, produto;
    printf("Digite quatro números para obter o produto entre eles: \n");
    scanf("%f%f%f%f", &num1, &num2, &num3, &num4);
    produto = num1 * num2 * num3 * num4;
    printf("O produto dos quatro números %.2f, %.2f, %.2f e %.2f é %.2f\n", num1, num2, num3, num4, produto);
    return 0;
}
