#include <stdio.h>

int main() {
    float x, y ,z, media;
    printf("Digite três números para obter a média entre eles: ");
    scanf("%f%f%f", &x, &y, &z);
    media = (x + y +z) / 3;
    printf("O valor calculado da média entre %f, %f e %f foi %f\n", x, y, z ,media);
    return 0;
};