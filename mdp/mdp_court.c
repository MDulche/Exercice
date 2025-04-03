#include <stdio.h>
int main(){ char chaine[50];
    printf("Entrez votre mot de passe : "); // Potentiellement virable
    fgets(chaine, 50, stdin);
    int i = 0, min = 0, maj = 0, spe = 0, chi = 0;
    while (chaine[i] != '\0'){  if (chaine[i] >= 'A' && chaine[i] <= 'Z') maj++;
        else if (chaine[i] >= 'a' && chaine[i] <= 'z') min++;
        else if (chaine[i] >= '0' && chaine[i] <= '9') chi++;
        else if (chaine[i] == '*' || chaine[i] == '-' || chaine[i] == '/' || chaine[i] == '+') spe++;
        i++;}   
    if(i >= 8 && chi >= 2 && spe >= 1 && maj >= 2 && min >= 2 && i-(chi+spe+maj+min)-1==0) printf("Mot de passe valide\n");
    else printf("Mot de passe invalide\n");
    return 0;}