/*
Nom du fichier : opérateurs.c
Objectif : Tester les différents opérateurs de base
Auteur : Livio SINGARIN-SOLE
Date : 22/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 



// PROGRAMME
int main(void) 
{   

    // INITIALISATION DES VARIABLES
    int a = 0;
    int b = 1;

    printf("Entrez la valeur de l'entier a : \n");
    scanf("%d", &a);

    printf("Entrez la valeur de l'entier b different de 0 : \n");
    scanf("%d", &b);


    // OPERATIONS

    printf("a + b = %d\n", a+b);

    printf("a - b = %d\n", a-b);

    printf("a x b = %d\n", a*b);

    printf("a / b = %d\n", a / b); // c'est la division euclidienne car on travaille avec des entiers

    printf("reste de la division euclidienne de a par b vaut %d\n", a%b);


    // INEGALITES OU EGALITES

    if (a == b) 
    {
        printf("a = b\n");
    }
    else if(a > b)
    {
        printf("a > b\n");
    }
    else 
    {
        printf("a < b\n");
    }


}