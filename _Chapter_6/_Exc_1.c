#include <stdio.h>

int main() 
{
    int seconds, minutes;
    printf("Qual a quantidade de minutos que vc deseja tranformar em segundos?: ");
    scanf("%d", &minutes);
    seconds = minutes * 60;
    printf("Há %d segundos em %d minutos.\n", seconds, minutes);
    return 0;

}