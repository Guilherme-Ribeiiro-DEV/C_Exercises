#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

struct Pizza 
{
        char *name;
        int price;
};


void clearScreen() 
{
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
}

char *pizzas()
{
    

    struct Pizza pizza[] = 
    {
        {"Calabresa", 25},
        {"Peperoni", 37.50},
        {"Frango", 25},
        {"Dois Queijos", 30},
        {"Goiabada", 25}
        
    };
    

    static char chosenPizza[50];

     printf("Os sabores de pizza disponivéis são: \n");
    for (int i = 0; i < sizeof(pizza) / sizeof(pizza[0]); i++)
    {
        printf("%s - R$ %.2f\n", pizza[i].name, (float)pizza[i].price);
    }
    printf("Qual você deseja? ");
    scanf("%s", &chosenPizza);

    printf("O tempo de espera para a pizza de %s é 30min.\n", chosenPizza); 
   
    return chosenPizza; 
}

int menu()
{
    int menuType;
    printf( "Olá, temos no nosso cardápio hoje alguns tipos de comidas: \n"
        "Tipo 1: Pizzas\n "
        "Tipo 2: Massas\n "
        "Tipo 3: Frutos do Mar\n "
        "Tipo 4: Comida Oriental.\n "
        "Qual tipo de estilo culinário será escolhido?: ");
    scanf("%d", &menuType);

    clearScreen();

     switch (menuType)
    {
        case 1:
            pizzas();
            break;

        /*case 2:
            massas();
            break;

        case 3: 
            frutosDoMar();
            break;

        case 4:
            comidaOriental();
            break;*/
        default:
            printf("Insira um estilo válido!\n");
    }

    return menuType;
}

int main()
{
    menu();
    return 0;
}