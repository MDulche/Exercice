#include <stdio.h>
#include <stdlib.h>
#include "fonction.h"




int main()
{
    int nombre = 0;
    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (PAIR(nombre))
    {
        printf("Le nombre est pair\n");
    }
    else
    {
        printf("Le nombre est impair\n");
    }

    return 0;

}



