#include <stdio.h>
#include <math.h>

int main() {
    float a, b, resto, quociente;
    printf("Digite dois números e descubra qual o quociente e o resto da divisão entre eles: \n");
    scanf("%f%f", &a, &b);

    if (b != 0) {
        quociente = a / b;
        resto = fmod(a, b); 
        printf("O quociente da divisão de %.2f por %.2f foi %.2f e o resto dessa divisão foi %.2f \n", a, b, quociente, resto);
    } else {
        printf("Erro: Divisão por zero não é permitida.\n");
    }

    return 0;
}
