#include <stdio.h>

int main(void)
{
    int choix;

    printf("Calculatrice simple\n");
    printf("1) Ajouter\n");
    printf("2) Soustraire\n");
    printf("3) Multiplier\n");
    printf("4) Diviser\n");
    printf("0) Quitter\n");
    printf("Choix : ");
    scanf("%d", &choix);

    if (choix == 0)
        printf("Au revoir !\n");

    return 0;
}
