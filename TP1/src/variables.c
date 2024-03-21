/*
Nom du fichier : variables.c
Objectif : Afficher les différentes types de variables
Auteur : Livio SINGARIN-SOLE
Date : 22/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 



// PROGRAMME
int main(void) 
{

    printf("\n------------------- Affichage de certains types de variables -------------------\n\n");


    char lettre = 'z';
    printf("char : %c\n", lettre); // on peut afficher des lettres en écrivant directement une lettre ou bien son nombre associé

    short petit_nombre = 500;
    printf("short : %hd\n", petit_nombre);

    int nombre1 = -32767;
    printf("int : %d\n", nombre1);

    unsigned nombre2 = 32767;
    printf("unsigned int : %u\n", nombre2);
    
    long int grand_nombre = 2111111111L;
    printf("long int : %ld\n", grand_nombre);

    long long int tres_grand_nombre = 9223372036854775807LL;
    printf("long long int : %lld\n", tres_grand_nombre);

    float pi = 3.14;
    printf("float : %f\n", pi);

    double flottant_precis = 3.1415926;
    printf("double : %lf\n", flottant_precis);

    long double flottant_tres_precis = 3.14E-5L;
    printf("long double : %LF\n", flottant_tres_precis);
    return 0;
}