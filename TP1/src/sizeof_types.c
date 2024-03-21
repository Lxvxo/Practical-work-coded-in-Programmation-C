/*
Nom du fichier : sizeof_types.c
Objectif : Afficher Afficher la taille en octets des différents types de Base
Auteur : Livio SINGARIN-SOLE
Date : 22/09/2023
Commentaires suplémentaire : sizeof est un long long int mais peut s'afficher également avec %ld
*/


// BIBLIOTHEQUES
#include <stdio.h> 

// on peut également utiliser %zu pour afficher la taille des variables

// PROGRAMME
int main(void) 
{

    printf("\nVoici les tailles des types de variables de base : \n\n");

    // On utilise la fonction sizeof(type de la vairable)

    printf("char : %llu\n", sizeof(char));
    printf("unsigned char : %llu\n", sizeof(unsigned char));
    printf("short : %llu\n", sizeof(short));
    printf("unsigned short : %llu\n", sizeof(unsigned short));
    printf("int : %llu\n", sizeof(int));
    printf("unsigned int: %llu\n", sizeof(unsigned int));
    printf("long int : %llu\n", sizeof(long int));
    printf("unsigned long int : %llu\n", sizeof(unsigned long int));
    printf("long long int : %llu\n", sizeof(long long int));
    printf("float : %llu\n", sizeof(float));
    printf("double : %llu\n", sizeof(double));
    printf("long double : %llu\n", sizeof(long double));
    
    
    return 0;
}