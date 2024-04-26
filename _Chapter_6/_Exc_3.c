#include <stdio.h>
#include <math.h>

float a, b ,c, form1, form2, form3, form4;

void Formulas() 
{
    float formulas[] = {form1, form2, form3, form4};
    int tamanho = sizeof(formulas) / sizeof(formulas[0]);

    for (int i = 0; i < tamanho; i++) {
        printf("Valor da formula %d é: %f\n", i + 1, formulas[i]);
    }
}

int main()
{
    printf("Informe o valor das variavéis A, B e C: ");
    scanf("%f%f%f", &a, &b, &c);
    form1 = (a + b) / c;
    form2 = pow(a, 2) + b + (5 * c);
    form3 = (a * b * c) + b + (c / 3) * 5 - 1;
    form4 = pow((a * b * c), 3)/ 2;
    Formulas();
    return 0;
}
