#include <stdio.h>

int main(){
    
    int age;
    printf("Input your age: ");
    scanf("%d", &age);
    
    if (age % 2 == 0 ) {
        printf("Your age is PAR!\n");
        printf("Your age multiplied by two: %d\n", age * 2);
        printf("Your age divided by two: %d\n", age / 2);
    }
    else {
        printf("Your age is ÍMPAR!\n");
    }

    if (age < 18) {
        if (age > 16) {
            printf("You already can vote!");
        }
        printf("Minimum age not reached!");
    }
    else if (age > 65) {
        printf("Maximum age reached! Do you wanna vote anyway?");
    }
    else {
        printf("Minimum age reached, you should vote!");
    }
}