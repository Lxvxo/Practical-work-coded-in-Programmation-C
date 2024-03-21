/*
Nom du fichier : recherche_dichotomique.c
Objectif : rechercher un nombre dans un tableau par méthode dichotomique
Auteur : Livio SINGARIN-SOLE
Date : 06/10/2023
Commentaires suplémentaire :
*/

// BIBLIOTHEQUES
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define NB_VALEURS 100 // nombre de valeurs contenues dans le tableau
#define RANGE_MAX 1000 // choix d'un nombre entre 0 et RANGE_MAX



typedef enum Booleen // true ou False
{
    false = 0,true = 1 
}bool;



// FONCTIONS

// recherche dichotomique
enum Booleen recherche_dicho(int Tab_entiers[], int nombre_recherche,int taille)
{

    int index_inferieure = 0;

    int index_superieure = taille - 1;

    while (index_inferieure <= index_superieure) {
        // on se place au milieu de l'intervalle
        int milieu = index_inferieure + (index_superieure - index_inferieure) / 2;
        
        // Si le nombre recherché est égale à l'élément au milieu, nous avons trouvé le nombre recherché.
        if (Tab_entiers[milieu] == nombre_recherche)
            return true;

        // Si le nombre recherché est plus petit, rechercher à gauche du milieu.
        if (Tab_entiers[milieu] > nombre_recherche)
            index_superieure = milieu - 1;
        else // Sinon, recherchez à droite du milieu.
            index_inferieure = milieu + 1;
    }

    // Si la nombre_recherche n'est pas présente dans le tableau, retournez -1.
    return false;
}
  



// Fonction d'échange pour échanger deux éléments d'un tableau
void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// tri bulle (trie une liste dans l'odre croissant)
void tri_bulle(int Tab_entiers[], int taille_tab)
{
    int n = taille_tab -1;
    for (int i = n; i>=0; i--)
    {   
        
        for (int j = 1; j<=i;j++)
        {
            if (Tab_entiers[j-1]>Tab_entiers[j])
            {
                echanger(&Tab_entiers[j-1],&Tab_entiers[j]);
            }
        }
    }




}

// PROGRAMME

int main(void)
{
    // Initialisation du tableau
    int Tab_entiers[NB_VALEURS];

    // Sélection aléatoire des valeurs
    srand( time( NULL ) );
    int k;
    for (k=0; k<NB_VALEURS; k++)
    {

        Tab_entiers[k] = rand() % RANGE_MAX+1;
    }

    // Tri du tableau

       printf("\nTableau avant le tri rapide :\n");
    for (int i = 0; i < NB_VALEURS; i++) {
        printf("%d ", Tab_entiers[i]);
    }

    tri_bulle(Tab_entiers, NB_VALEURS);

    printf("\n\nTableau apres le tri rapide :\n");
    for (int i = 0; i < NB_VALEURS; i++) {
        printf("%d ", Tab_entiers[i]);
    }



    // Sélection du nombre à rechercher
    int nombre_recherche;
    printf("\nEntrez le nombre a rechercher : ");
    scanf("%d", &nombre_recherche);




    // Recherche du nombre saisi

    enum Booleen result = recherche_dicho( Tab_entiers, nombre_recherche, NB_VALEURS);
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
