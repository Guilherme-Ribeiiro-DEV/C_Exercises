#include <stdio.h>

int main(){
    int age;
    printf("Input your age: \n");
    scanf("%d", &age);
    if (age < 18) {
        if (age > 16) {
            printf("You already can vote!");
        }
        printf("Minimum age not reached!");
    } else if (age > 65) {
        printf("Maximum age reached! Do you wanna vote anyway?");
    } else {
        printf("Minimum age reached, you should vote!");
    }
}