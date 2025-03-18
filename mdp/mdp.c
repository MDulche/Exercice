#include <stdio.h>

#define LONGUEUR_MINUSCULE 26
#define LONGUEUR_MAJUSCULE 26
#define LONGUEUR_SPECIAL 4
#define LONGUEUR_CHIFFRE 10
#define LONGUEUR_MDP 50

int comptage_caractere(char *chaine)
{
    int i=0;
    int count=0;

    while(chaine[i] != '\0')
    {
        printf("%c\n", chaine[i]);
        count++;
        i++;
    }

    return count;
}

int comptage_chiffre(char *chaine)
{
    char caracterechi[LONGUEUR_CHIFFRE] = {'0','1','2','3','4','5','6','7','8','9'};
    int i=0;
    int count=0;

    while(chaine[i] != '\0')
    {
        for(int j=0; j<LONGUEUR_CHIFFRE; j++)
        {
            if(chaine[i] == caracterechi[j])
            {
                count++;
            }
        }
        i++;
    }
    return count;
}

int symbole_special(char *chaine)
{
    char caracterespe[LONGUEUR_SPECIAL] = {'+','-','*','/'};
    int i=0;
    int count=0;

    while(chaine[i] != '\0')
    {
        for(int j=0; j<LONGUEUR_SPECIAL; j++)
        {
            if(chaine[i] == caracterespe[j])
            {
                count++;
            }
        }
        i++;
    }
    return count;
}

int comptage_maj(char *chaine)
{
    char caracteremaj[LONGUEUR_MAJUSCULE] = {'A','B','C','D','E','F','G','H','I','J','K','L','M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X', 'Z'};
    int i=0;
    int count=0;

    while(chaine[i] != '\0')
    {
        for(int j=0; j<LONGUEUR_MINUSCULE; j++)
        {
            if(chaine[i] == caracteremaj[j])
            {
                count++;
            }
        }
        i++;
    }
    return count;
}

int comptage_min(char *chaine)
{
    char caracteremin[LONGUEUR_MINUSCULE] = {'a','b','c','d','e','f','g','h','i','j','k','l','m', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'z'};
    
    int i=0;
    int count=0;

    while(chaine[i] != '\0')
    {
        for(int j=0; j<LONGUEUR_MINUSCULE; j++)
        {
            if(chaine[i] == caracteremin[j])
            {
                count++;
            }
        }
        i++;
    }
    return count;
}

int main()
{
    char chaine[LONGUEUR_MDP];
    
    printf("Entrez votre mot de passe : ");
    scanf("%s", chaine);

    int longueur = comptage_caractere(chaine);
    int chiffre = comptage_chiffre(chaine);
    int special = symbole_special(chaine);
    int maj = comptage_maj(chaine);
    int min = comptage_min(chaine);

    if(longueur >= 8 && chiffre >= 2 && special >= 1 && maj >= 2 && min >= 2)
    {
        printf("Mot de passe valide\n");
    }
    else
    {
        printf("Mot de passe invalide\n");
    }

    return 0;
}