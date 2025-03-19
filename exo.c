#include <stdio.h>

int main()
{
    char chaine[25]; // initialisation de la chaine et de son maximum de caractères
    
    printf("Entrez votre chaine: "); // On affiche la question
    scanf("%s", chaine); // On récupère la chaine entrée par l'utilisateur

    int i = 0; // initialisation de la variable i qui nous servira d'indice pour se déplacer dans ma chaine
    int anticonstitutionnellement = 0; // initialisation de la variable anticonstitutionnellement qui nous servira de compteur

    while(chaine[i] != '\0')    
    {
        printf("%c\n", chaine[i]); // On affiche chaque caractère de la chaine

        if (chaine[i] == 'a') // Si le caractère est un 'a'
        {
            anticonstitutionnellement++; // On incrémente le compteur
        }

        i++; // On incrémente l'indice pour passer au caractère suivant
    }

    printf("Nombre de 'a' dans la chaine: %d\n", anticonstitutionnellement); // On affiche le nombre de 'a' dans la chaine

    return 0; // On retourne 0 pour dire que tout s'est bien passé
}
