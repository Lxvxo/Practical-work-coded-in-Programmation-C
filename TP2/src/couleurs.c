/*
Nom du fichier : couleurs.c
Objectif : Créer une classe pour stocker des couleurs
Auteur : Livio SINGARIN-SOLE
Date : 24/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define NB_COULEURS 10 // nombre de couleurs


// Structure d'une couleur
typedef struct couleur
{
    int R;
    int G;
    int B;
    int A;
}color;


// PROGRAMME
int main(void)
{

    // création du tableau des couleurs
    struct couleur Liste_couleurs[NB_COULEURS];

    // initialisation des couleurs

    Liste_couleurs[0].R = 0x15;
    Liste_couleurs[0].G = 0x20;
    Liste_couleurs[0].B = 0xAC;
    Liste_couleurs[0].A = 0xFF;


    // sélection aléatoires des autres couleurs

    srand( time( NULL ) );
    int i;
    for (i=1 ; i<NB_COULEURS; i++)
    {
        Liste_couleurs[i].R = rand() % 256; 
        Liste_couleurs[i].G = rand() % 256; 
        Liste_couleurs[i].B = rand() % 256; 
        Liste_couleurs[i].A = rand() % 256; 
    }

    // affichage des couleurs
    int h;
    for (h=0 ; h<NB_COULEURS; h++)
    {
        printf("\n\n\n--------------  Couleur %d  --------------\n\n",h+1);

        printf("Rouge(R) : %d\nVert(G) : %d\nBleu(B) : %d\nTransparence(alpha) : %d\n",Liste_couleurs[h].R,Liste_couleurs[h].G,Liste_couleurs[h].B,Liste_couleurs[h].A);


    }


    return 0;
}