/*
Nom du fichier : chercher.c
Objectif : chercher un nombre dans un tableau
Auteur : Livio SINGARIN-SOLE
Date : 06/10/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define NB_VALEURS 100 // nombres de valeurs contenues dans le tableau
#define RANGE_MAX 1000 // choix d'un nombre entre 0 et RANGE_MAX


typedef enum Booleen // True ou False
{
    false = 0,true = 1 
}bool;


// FONCTIONS

// chercher un nombre entier dans un tableau
enum Booleen chercher(int Tab_entiers[], int nombre_recherche,int taille)
{
    enum Booleen result = false;
    for (int k = 0; k<taille; k++)
    {
        if (nombre_recherche == Tab_entiers[k])
        {
            result = true;
            break;
        };

    }

    return result;
};

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

    // initialisation du nombre à rechercher
    int nombre_recherche;
    printf("\nEntrez le nombre a rechercher : ");
    scanf("%d", &nombre_recherche);



    // recherche du nombre
    enum Booleen result = chercher( Tab_entiers, nombre_recherche, NB_VALEURS);


    if (result)
    {
        printf("\nPresent\n");
    }
    else
    {
        printf("\nAbsent\n");
    }


    return 0;
}