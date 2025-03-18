#include <stdio.h>
#include <stdlib.h>

#define UN(x) (++(x))

void ajouter_un(int *nombre);

int main()
{
    int nombre;

    printf("Saisir un nombre: ");
    scanf("%d", &nombre);

    //UN(nombre);
    ajouter_un(&nombre);
    printf("Le nombre après ajout de 1 est: %d\n", nombre);

    return EXIT_SUCCESS;
}

void ajouter_un(int *nombre)
{
    *nombre += 1;
}
