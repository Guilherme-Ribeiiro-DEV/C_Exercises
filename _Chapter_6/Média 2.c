#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    float a, b, c, media;
    scanf("%f\n%f\n%f\n", &a, &b, &c);
    media = ((a * 2) + (b * 3) + (c * 5)) / 10;
    printf("MEDIA = %.1f", media);
	return 0;
}