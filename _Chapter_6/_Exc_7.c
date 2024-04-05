#include <stdio.h>


void hasatagline() {
    for (int i = 0; i < 20; i++) {
        printf("#");
    }
}

void hastagspace() {
    printf("#                   #\n");
    printf("#                   #\n");
}

int main ()
{
    hasatagline();
    hastagspace();
    printf("#  SEJA BEM-VINDO!  #\n");
    hastagspace();
    hasatagline();
    return 0;
}