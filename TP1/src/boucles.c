/*
Nom du fichier : bonjour.c
Objectif : Afficher un triangles avec des boucles V1
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

    int k;
    int i;

    printf("*\n"); // étoile de début de la première ligne
    for (k=1 ; k<compteur-1 ; k++)
    {
        printf("*"); // étoile de début des autres lignes
        for (i = 0 ; i<k-1 ;  i++)
        {
            printf("#");
        }
        printf("*\n"); // étoile de fin des autres lignes
    }
    for (k = 0; k < compteur ; k++) 
    {
        printf("*"); // étoiles de la dernière ligne
    }
    return 0;
}