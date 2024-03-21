/*
Nom du fichier : conditions.c
Objectif : Conditions et boucles avec divisibilité
Auteur : Livio SINGARIN-SOLE
Date : 22/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 



// PROGRAMME
int main(void) 
{
    int i; // compteur 
    int N = 1000; 


    // Nombres divisibles par 2 et 15 :

    printf("\n\nNombres divisibles par 2 et 15 :\n\n ");
    for (i=0 ; i<= N; i++) 
    {
        if ((i % 2 == 0) && (i % 15 == 0))
        {
        printf(" %d,", i);
        }
    }
    // Nombres divisibles par 103 ou 107 :

    printf("\n\nNombres divisibles par 103 ou 107 :\n\n ");
    for (i=0 ; i<= N; i++) 
    {
        if ((i % 103 == 0) || (i % 107 == 0))
        {
        printf(" %d,", i);
        }
    }
    // Nombres divisibles par 5 ou 7 mais pas divisible par 3 :
    
    printf("\n\nNombres divisibles par 5 ou 7 mais pas divisible par 3 :\n\n ");
    for (i=0 ; i<= N; i++) 
    {
        if (((i % 5 == 0) || (i % 7 == 0)) && (i % 3 != 0 ))
        {
        printf(" %d,", i);
        }
    }
    



    return 0;
} 