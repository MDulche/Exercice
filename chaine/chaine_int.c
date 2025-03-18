#include <stdio.h>

#define LONGUEUR_CHAINE 25

int pwr(int nombre, int puissance)
{
    int resultat = 1;
    for(int i=0; i<puissance; i++)
    {
        resultat *= nombre;
    }
    return resultat;
}

int transforme(char *chaine)
{
    int resultat = 0;
    int i=0;
    while(chaine[i] != '\0')
    {
        if(chaine[i] >= '0' && chaine[i] <= '9')
        {
            resultat += (chaine[i] - '0') * pwr(10, i);
        }
        i++;
    }
    return resultat;
}

int main()
{
    char chaine[LONGUEUR_CHAINE];
    
    printf("Entrez une chaine de caractères : ");
    scanf("%s", chaine);

    printf("Nombre : %d\n", transforme(chaine));

    return 0;
}