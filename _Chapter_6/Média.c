#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double a, b, media;
    scanf("%lf%lf", &a, &b);
    media = ((a * 3.5) + (b * 7.5)) / 11;
    printf("MEDIA = %.5lf", media);
	return 0;
}