#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int a, b, c, d, dif, p1, p2;
    scanf("%d%d%d%d", &a, &b, &c, &d);
    p1 = a * b; 
    p2 = c * d;
    dif = p1 - p2;
    printf("DIFERENCA = %d", dif);
	return 0;
}