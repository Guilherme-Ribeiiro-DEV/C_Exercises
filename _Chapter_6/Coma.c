#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float valor, vGorgeta;
    scanf("%f", &valor);
    vGorgeta = (valor / 10) + valor;
    printf("%.2f",vGorgeta);
	return 0;
}