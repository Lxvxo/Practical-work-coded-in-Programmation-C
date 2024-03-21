/*
Nom du fichier : tri.c
Objectif : Trier un tableau
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

// Fonction d'échange pour échanger deux éléments d'un tableau
void echanger(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Fonction partition qui choisit un pivot et réarrange le tableau en plaçant
// les éléments plus petits à gauche et les éléments plus grands à droite du pivot
int partition(int tableau[], int bas, int haut) {
    // Choix du pivot (ici, on prend le dernier élément du tableau)
    int pivot = tableau[haut];
    int i = (bas - 1);

    for (int j = bas; j <= haut - 1; j++) {
        // Si l'élément actuel est plus petit ou égal au pivot
        if (tableau[j] <= pivot) {
            i++;
            // Échange l'élément i et l'élément j
            echanger(&tableau[i], &tableau[j]);
        }   
    }
    // Échange l'élément (i + 1) et le pivot
    echanger(&tableau[i + 1], &tableau[haut]);
    return (i + 1);
}

// Fonction de tri rapide
void triRapide(int tableau[], int bas, int haut) {
    if (bas < haut) {
        // Trouve l'indice de partition (le pivot est maintenant à sa position correcte)
        int indicePartition = partition(tableau, bas, haut);

        // Trie les éléments avant et après la partition
        triRapide(tableau, bas, indicePartition - 1);
        triRapide(tableau, indicePartition + 1, haut);
    }
}

int main(void) {
    // Initialisation des tableaux
    int tableau[NB_VALEURS];

    // Sélection aléatoire des valeurs
    srand( time( NULL ) );
    int k;
    for (k=0; k<NB_VALEURS; k++)
    {
        tableau[k] = rand() % RANGE_MAX+1;
    }

    printf("\nTableau avant le tri rapide :\n");
    for (int i = 0; i < NB_VALEURS; i++) {
        printf("%d ", tableau[i]);
    }

    triRapide(tableau, 0, NB_VALEURS - 1);

    printf("\n\nTableau apres le tri rapide :\n");
    for (int i = 0; i < NB_VALEURS; i++) {
        printf("%d ", tableau[i]);
    }

    return 0;
}
