#include <stdio.h>

#define LONGUEUR_VOYELLES 12
#define LONGUEUR_CONSONNES 40
#define LONGUEUR_CHAINE 25

int comptage_v(char *chaine)
{
    char tabv[LONGUEUR_VOYELLES] = {'a', 'e', 'i', 'o', 'u', 'y', 'A', 'E', 'I', 'O', 'U', 'Y'};
    int i=0, int countv=0;

    while(chaine[i] != '\0')
    {
        for(int j=0; j<LONGUEUR_VOYELLES; j++)
        {
            if(chaine[i] == tabv[j])
            {
                countv++;
            }
        }
        i++;
    }
    return coun tv;
}

int comptage_c(char *chaine)
{
    char tabc[LONGUEUR_CONSONNES] = {'b', 'c', 'd', 'f', 'g', 'h', 'j', 'k', 'l', 'm', 'n', 'p', 'q', 'r', 's', 't', 'v', 'w', 'x', 'z', 'B', 'C', 'D', 'F', 'G', 'H', 'J', 'K', 'L', 'M', 'N', 'P', 'Q', 'R', 'S', 'T', 'V', 'W', 'X', 'Z'};
    int i=0, countc=0;

    while(chaine[i] != '\0')
    {
        for(int j=0; j<LONGUEUR_CONSONNES; j++)
        {
            if(chaine[i] == tabc[j])
            {
                countc++;
            }
        }
        i++;
    }
    return countc;
}

int main()
{
    char chaine[LONGUEUR_CHAINE];
    
    printf("Entrez une chaine de caractères : ");
    scanf("%s", chaine);

    printf("Nombre de voyelles : %d\n", comptage_v(chaine));
    printf("Nombre de consonnes : %d\n", comptage_c(chaine));

    return 0;
}