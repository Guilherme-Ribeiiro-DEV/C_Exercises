#include <stdio.h>

int main() {
    int horas, minutos, segundos;

    printf("Qual o horario?: ");
    scanf("%d:%d", &horas, &minutos);

    segundos = (horas * 3600) + (minutos * 60);

    printf("Se passaram %d segundos desde o inicio do dia.\n", segundos);
    
    return 0;
}
