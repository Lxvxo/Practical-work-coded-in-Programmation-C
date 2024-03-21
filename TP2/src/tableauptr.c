/*
Nom du fichier : tableauptr.c
Objectif : Manipulation de Tableaux avec des Pointeurs
Auteur : Livio SINGARIN-SOLE
Date : 24/09/2023
Commentaires suplémentaire : 
Cette manière de choisir des flottants aléatoirement 
n'est pas réellement utile mais pour l'expérimentation elle est interessante
*/


// BIBLIOTHEQUES
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>
#include <math.h>

// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define NB_VALEURS 10 // nombre de valeurs contenues dans le tableau
#define RANGE_MAX 100 // Intervalle de valeurs entre 0 et RANGE_MAX
#define NB_APRES_VIRGULE 3 // si on change le nombre après la virgule, ne pas oublier de changer le type d'affichage dans le programme (%.'NB_APRES_VRIGULE'f)


// PROGRAMME
int main(void)
{
    // Initialisation des tableaux
    int Tab_entiers[NB_VALEURS];
    float Tab_flottants[NB_VALEURS]; 

    
    // initialisation des pointeurs (on se place à l'adresse de la première variable de chaque tableau)
    
    int *pointeur_entiers = &Tab_entiers[0]; 
    float *pointeur_flottants = &Tab_flottants[0];

    // Sélection aléatoire des valeurs
    srand( time( NULL ) );
    int k;
    int i;
    int chiffre_random;
    for (k=0; k<NB_VALEURS; k++)
    {
        *pointeur_entiers = rand() % RANGE_MAX+1;
        *pointeur_flottants = rand() % RANGE_MAX+1;
        for (i=0;i<NB_APRES_VIRGULE;i++)
        {
            chiffre_random = rand() % 10; // choix du nombre après la virgule.
            *pointeur_flottants += chiffre_random*pow(10,-(i+1));
        }
        pointeur_entiers++;
        pointeur_flottants++;
    }

    // AFFICHAGE DES TABLEAUX AVANT MODIFICATION

    // réinitialisation des pointeurs
    pointeur_entiers -= NB_VALEURS;
    pointeur_flottants -= NB_VALEURS;

    printf("\n\n####################-Nombres entiers(AVANT MODIFICATION)-####################\n");
    for (k=0; k<NB_VALEURS; k++)
    {
        printf(" %d ", *pointeur_entiers);
        pointeur_entiers++;
    }printf("\n");

    printf("\n\n####################-Nombres flottants(AVANT MODIFICATION)-####################\n");
    for (k=0; k<NB_VALEURS; k++)
    {
        printf(" %.3f ", *pointeur_flottants); // 3 chiffres après la virgule
        pointeur_flottants++;
    }printf("\n");


    // Modification des valeurs à l'aide de pointeurs

    // réinitialisation des pointeurs
    pointeur_entiers -= NB_VALEURS;
    pointeur_flottants -= NB_VALEURS;

    for (k=0; k<NB_VALEURS; k++)
    {
        if (k % 2 == 0)
        {
            *pointeur_entiers *= 3;
            *pointeur_flottants *= 3;

            
        }
        // on parcourt le tableau à l'aide des pointeurs
        pointeur_entiers++;
        pointeur_flottants++;
    }

    printf("\n------------------------------------------------------------------------------------------------------------------------------------------------------------\n");

    // AFFICHAGE DES TABLEAUX APRES MODIFICATION

    // réinitialisation des pointeurs
    pointeur_entiers -= NB_VALEURS;
    pointeur_flottants -= NB_VALEURS;

    printf("\n\n####################-Nombres entiers(APRES MODIFICATION)-####################\n");
    for (k=0; k<NB_VALEURS; k++)
    {
        printf(" %d ", *pointeur_entiers);
        pointeur_entiers++;
    }printf("\n");

    printf("\n\n####################-Nombres flottants(APRES MODIFICATION)-####################\n");
    for (k=0; k<NB_VALEURS; k++)
    {
        printf(" %.3f ", *pointeur_flottants); // 3 chiffres après la virgule
        pointeur_flottants++;
    }printf("\n");

    return 0;
}