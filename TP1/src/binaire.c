/*
Nom du fichier : binaire.c
Objectif : Afficher un nombre entier en binaire
Auteur : Livio SINGARIN-SOLE
Date : 22/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES 
#include <stdio.h> 

// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define NB_BITS 16 // Nombre de bits maximum affiché

// FONCTIONS

void afficher_tableau(int tab[], int taille_tab) // Afficher un tableau d'entiers
{

    int i;

    for(i=0;i<taille_tab;i++)
        printf("%d ",tab[i]);
}

// PROGRAMME
int main(void) 
{
    int nombre; // nombre à convertir
    printf("Entrez un nombre entier :\n");
    scanf("%d", &nombre);

    int tableau_bits[NB_BITS] = {0}; // crée un tableau de 0

    int index = NB_BITS - 1; // on commence à écrire à la fin du tableau pour ne pas l'inverser après

    // méthode pour convertir un nombre entier en nombre binaire
    int r = -1;
    while (nombre != 0)
    {
        r = nombre % 2;
        nombre = nombre / 2;

        tableau_bits[index] = r;
        index -= 1;
    }

    afficher_tableau(tableau_bits, NB_BITS);
    
    return 0;
}