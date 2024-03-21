/*
Nom du fichier : cercle.c
Objectif : Calculer l'aire et le rayon d'un cercle
Auteur : Livio SINGARIN-SOLE
Date : 22/09/2023
Commentaires suplémentaire : ne pas oublier de compiler avec -lm si on utilise 
la bibliothèque math.h

*/


// BIBLIOTHEQUES
#include <stdio.h> 
// #include <math.h>


// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define M_PI 3.14159265358979323846 // on définit directement PI au lieu de passer par la bibliothèque

// PROGRAMME
int main(void) 
{

    
    float rayon = -1;
    printf("Entrez la valeur du rayon du cercle : ");
    
    scanf("%f", &rayon); // on donne la possibilité d'entre la valeur du rayon en type float (dans le scanf
    // on renseigne l'adresse de la variable "&")

    // Calcul du périmètre
    float perimetre = 2 * M_PI * rayon;


    // Calcul de l'aire
    float aire = rayon * rayon * M_PI ;


    printf("Perimetre : %f\nAire : %f\n", perimetre, aire);

    return 0;
}