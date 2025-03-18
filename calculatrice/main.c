#include <stdio.h>
#include <stdlib.h>
#include "commun.h"

#define ADDITION(n1, n2) ((n1) + (n2)) // Addition de deux nombres
#define SOUSTRACTION(n1, n2) ((n1) - (n2)) // Soustraction de deux nombres
#define MULTIPLICATION(n1, n2) ((n1) * (n2)) // Multiplication de deux nombres
#define DIVISION(n1, n2) ((n1) / (n2)) // Division de deux nombres
#define MODULO(n1, n2) ((n1) % (n2)) // Reste de la division de deux nombres
#define ARRONDIE(n) ((int)((n)*100+0.5)/100) // Arrondie un nombre à deux chiffres après la virgule

int main()
{
    float nombre1, nombre2;
    char operateur;
    
    printf("Ecrivez le calcul à effectuer\n");
    scanf("%f %c %f", &nombre1, &operateur, &nombre2);

    switch (operateur)
    {
        case '+':
            printf("Le résultat de l'addition est: %d\n", ARRONDIE(ADDITION(nombre1, nombre2)));
            break;
        case '-':
            printf("Le résultat de la soustraction est: %d\n", ARRONDIE(SOUSTRACTION(nombre1, nombre2)));
            break;
        case '*':
            printf("Le résultat de la multiplication est: %d\n", ARRONDIE(MULTIPLICATION(nombre1, nombre2)));
            break;
        case '/':
            if (nombre2 == 0)
            {
                printf("Erreur: division par zéro\n");
                return EXIT_FAILURE;
            }
            else
            {
                printf("Le résultat de la division est: %d\n", ARRONDIE(DIVISION(nombre1, nombre2)));
            }
            break;
        case '%':
            printf("Le reste de la division est: %d\n", ARRONDIE(MODULO((int)nombre1, (int)nombre2)));
            break;
    }

    return EXIT_SUCCESS;
}

