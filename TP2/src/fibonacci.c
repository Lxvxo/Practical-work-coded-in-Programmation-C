/*
Nom du fichier : fibonacci.c
Objectif : Calculer les termes de la suite de fibonacci
Auteur : Livio SINGARIN-SOLE
Date : 24/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 


// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define N 20 // Nombre de termes de la suite de Fibonacci


// PROGRAMME
int main(void)
{   
    
    printf("\n Les %d premiers termes de la suite de Fibonacci : \n", N);

    // intialisation
    int Un_2 = 1;
    int Un_1 = 1;
    int Un;
    int k;

    printf("\n  %d  ", Un_2);
    printf("  %d  ", Un_1);

    // Calcul des autres termes a parir des deux premiers termes
    for (k = 2; k< N; k++)
    {
        Un = Un_2 + Un_1;

        printf("  %d  ", Un);
        Un_2 = Un_1;
        Un_1 = Un;

    }
    printf("\n");
    return 0;
}
