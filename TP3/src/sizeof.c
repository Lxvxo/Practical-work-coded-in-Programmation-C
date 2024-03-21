/*
Nom du fichier : sizeof_types.c
Objectif : Afficher Afficher la taille en octets des différents types de Base (64bits)
Auteur : Livio SINGARIN-SOLE
Date : 06/10/2023
Commentaires suplémentaire :
On observe qu'un pointeur occupe toujours 8 octets dans un appareil en 64 bits.
*/


// BIBLIOTHEQUES
#include <stdio.h> 



// PROGRAMME
int main(void) 
{

    printf("\nVoici les tailles de certains types de variables de base : \n\n");

    // On utilise la fonction sizeof(type de la vairable)

    printf("char : %llu\n", sizeof(char));
    printf("char* : %llu\n", sizeof(char*));
    printf("char** : %llu\n", sizeof(char**));
    printf("char*** : %llu\n", sizeof(char***));

    printf("short : %llu\n", sizeof(short));
    printf("short* : %llu\n", sizeof(short*));

    printf("int : %llu\n", sizeof(int));
    printf("int* : %llu\n", sizeof(int*));
    printf("int** : %llu\n", sizeof(int**));

    printf("long long int : %llu\n", sizeof(long long int));
    printf("long long int*: %llu\n", sizeof(long long int*));
    printf("long long int** : %llu\n", sizeof(long long int**));


    printf("float : %llu\n", sizeof(float));
    printf("float* : %llu\n", sizeof(float*));
    printf("float** : %llu\n", sizeof(float**));
    printf("float*** : %llu\n", sizeof(float***));
    

    printf("double : %llu\n", sizeof(double));
    printf("double* : %llu\n", sizeof(double*));
    printf("double** : %llu\n", sizeof(double**));

    printf("long double : %llu\n", sizeof(long double));
    printf("long double* : %llu\n", sizeof(long double*));
    printf("long double** : %llu\n", sizeof(long double**));

    
    
    return 0;
}