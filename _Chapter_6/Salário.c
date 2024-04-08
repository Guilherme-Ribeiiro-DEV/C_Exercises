#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int number,cargaHoraria;
    float diaria;
    scanf("%d%d%f", &number, &cargaHoraria, &diaria);
    float salario = cargaHoraria * diaria;
    printf("NUMBER = %d\nSALARY = R$ %.2f", number, salario);
	return 0;
}