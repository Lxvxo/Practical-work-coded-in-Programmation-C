/*
Nom du fichier : bits.c
Objectif : Vérifier si le 4ème bit et le 20ème bit d'une variable sont à 1
Auteur : Livio SINGARIN-SOLE
Date : 24/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 

// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define MASKLIT4 0x00000008 // 4ème bit à 1
#define MASKLIT20 0x00080000 // 20 ème bit à 1


// PROGRAMME
int main(void) 
{
    int var = 524296;
    int verif4;
    int verif20;

    verif4 = (var & MASKLIT4) >> 3; // on décale le 4ème bit 
    verif20 = (var & MASKLIT20) >> 19; // on décale le 20ème bit

    int resultat = verif4 & verif20; // on vérifie si les deux sont à 1

    printf("%d\n", resultat);

    return 0;
}