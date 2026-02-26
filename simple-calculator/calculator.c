#include <stdio.h>

int main(void)
{
    int choix;
    int A, B;

    do
    {
        printf("Calculatrice simple\n");
        printf("1) Ajouter\n");
        printf("2) Soustraire\n");
        printf("3) Multiplier\n");
        printf("4) Diviser\n");
        printf("0) Quitter\n");
        printf("Choix : ");
        scanf("%d", &choix);

        if (choix == 1)
        {
            printf("A : ");
            scanf("%d", &A);
            printf("B : ");
            scanf("%d", &B);
            printf("Résultat : %d\n", A + B);
        }
        else if (choix == 2)
        {
            printf("A : ");
            scanf("%d", &A);
            printf("B : ");
            scanf("%d", &B);
            printf("Résultat : %d\n", A - B);
        }
        else if (choix == 3)
        {
            printf("A : ");
            scanf("%d", &A);
            printf("B : ");
            scanf("%d", &B);
            printf("Résultat : %d\n", A * B);

        }
	else if (choix == 4)
	{
	    int B;
	    float resultat;
	    printf("A : ");
	    scanf("%d", &A);
	    printf("B : ");
	    scanf("%d", &B);
	
	    if (B == 0)
	 {
        printf("Erreur : division par zéro\n");
	 }
    else
    {
        resultat = (float)A / B;
        printf("Résultat : %.2f\n", resultat);
    }
}	
        else if (choix != 0)
        {
            printf("Choix invalide\n");
        }

    } while (choix != 0);

    printf("Au revoir !\n");
    return 0;
}
