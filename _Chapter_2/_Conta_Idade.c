#include <stdio.h>

int main() {
    int ano_atual, ano_nascimento;
    ano_atual = 2024;

    printf("Em que ano você nasceu?: ");
    scanf("%d", &ano_nascimento);

    int idade = ano_atual - ano_nascimento;

    printf("Atualmente você tem %d anos\n", idade);
    return 0;
}