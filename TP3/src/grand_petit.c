/*
Nom du fichier : grand_petit.c
Objectif : Trouver le max et le min d'un tableau de nombres
Auteur : Livio SINGARIN-SOLE
Date : 06/10/2023
Commentaires suplémentaire :
*/

// BIBLIOTHEQUES
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define NB_VALEURS 100 // nombre de valeurs contenues dans le tableau d'entiers
#define RANGE_MAX 1000 // choix d'un nombre entre 0 et RANGE_MAX


// FONCTIONS

// Stocke dans un tableau (taille_tab) le max et le min d'un tableau d'entiers (Tab_entiers)
void f_min_max(int Tab_entiers[], int min_max[], int Nb_max, int taille_tab)
{   
    int k;
    min_max[0] =  Nb_max;
    min_max[1] = -1;
    for (k=0; k<taille_tab;k++)
    {
        if (Tab_entiers[k] > min_max[1])
            {
                min_max[1] = Tab_entiers[k];
            };

        if (Tab_entiers[k] < min_max[0])
        {
            min_max[0] = Tab_entiers[k];
        };

    };
    

    
}

// PROGRAMME
int main(void)
{
    // Initialisation des tableaux
    int Tab_entiers[NB_VALEURS];

    // Sélection aléatoire des valeurs
    srand( time( NULL ) );
    int k;
    for (k=0; k<NB_VALEURS; k++)
    {

        Tab_entiers[k] = rand() % RANGE_MAX+1;
        printf(" %d ", Tab_entiers[k]);
    }

    // Calcul du max et du min
    int min_max[2];

    f_min_max(Tab_entiers,min_max, RANGE_MAX,NB_VALEURS);

    printf("Max : %d\nMin : %d", min_max[1], min_max[0]);







    return 0;
}