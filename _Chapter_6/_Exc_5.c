#include <stdio.h>

int main()
{
    int troco, dinheiro, qntcafé;
    printf("Quantos reais você tem pra comprar café?: \n");
    scanf("%d", &dinheiro);
    troco = dinheiro % 7;
    qntcafé = dinheiro / 7;
    printf("Com %d você consegue comprar %d cafés e recebe %d reais de troco.", dinheiro, qntcafé, troco);
}