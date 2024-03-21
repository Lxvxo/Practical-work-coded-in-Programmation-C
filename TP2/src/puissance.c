/*
Nom du fichier : puissance.c
Objectif : créer une fonction puissance
Auteur : Livio SINGARIN-SOLE
Date : 22/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 


// PROGRAMME
int main(void) 
{   

    // Intialisation des entiers choisis
    int a = 2;
    int b = 3;
    int resultat = 1;

    if (b == 0)
    {
        printf("%d a la puissance 0 vaut 1", a);
    }
    int k;
    for (k=0 ; k<b;k++)
    {
        resultat *= a; // On multiplie a par lui même b fois.
    }
    printf("%d a la puissance %d vaut %d", a, b, resultat);
    return 0;
}