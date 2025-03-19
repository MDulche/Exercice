#include <stdio.h>

int main()
{
    char chaine[25]; // initialisation de la chaine et de son maximum de caractères
    
    printf("Entrez votre chaine: "); // On affiche la question
    scanf("%s", chaine); // On récupère la chaine entrée par l'utilisateur

    int i = 0;
    int nb_a = 0;

    while(chaine[i] != '\0') 
    {
        if(chaine[i] == 'a' || chaine[i] == 'A') 
        {
            nb_a++; // Stocke le nombre de "A" dans la variable en mémoire
        }
        i++;
    }

    printf("Le nombre de A : %d. \n", nb_a);

    return 0;
}