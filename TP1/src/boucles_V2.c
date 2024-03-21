/*
Nom du fichier : bonjour.c
Objectif : Afficher un triangles avec des boucles V2
Auteur : Livio SINGARIN-SOLE
Date : 22/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 



// PROGRAMME

int main(void)  
{   
    int compteur = 0;
    printf("Entrez la taille du triangle :\n");
    scanf("%d", &compteur);
    while (compteur <= 0 || compteur > 10) // condition pour que la taille du triangle reste entre 0 et 10
    {
        printf("La taille du triangle doit etre comprise entre 1 et 10 !!!\n");
        printf("Entrez la taille du triangle :\n");
        scanf("%d", &compteur);
    }

    int k = 1;
    int i = 0;
    int h = 0;

    printf("*\n"); // étoile de début de la première ligne

    while (k<compteur-1)
    {
        printf("*"); // étoile de début des autres lignes
        while(i<k-1)
        {
            printf("#");
            i++;
        }
        printf("*\n");// étoile de fin des autres lignes
        k++;
    }
    while (h < compteur)
    {
        printf("*"); // étoiles de la dernière ligne
        h++;
    }
    return 0;
}