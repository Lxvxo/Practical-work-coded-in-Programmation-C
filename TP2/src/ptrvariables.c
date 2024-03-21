/*
Nom du fichier : ptrvariables.c
Objectif : Manipuler les variables et les adresses à l'aide de pointeurs
Auteur : Livio SINGARIN-SOLE
Date : 24/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 


// PROGRAMME
int main(void) 
{
    // affichage des variables avec leur adresse

    printf("\n------------------- Affichage de certains types de variables avec leur adresse -------------------\n\n");


    char lettre = 'z';
    char *pointeur_char = &lettre;
    printf("char : %c | Adresse : %p\n", lettre, pointeur_char); 

    
    short petit_nombre = 500;
    short *pointeur_short = &petit_nombre;
    printf("short : %x | Adresse : %p\n", petit_nombre, pointeur_short);

    int nombre1 = -32767;
    int *pointeur_int = &nombre1;
    printf("int : %x | Adresse : %p\n", nombre1, pointeur_int);

    unsigned nombre2 = 32767;
    unsigned int *pointeur_u_int = &nombre2;
    printf("unsigned int : %x | Adresse : %p\n",nombre2, pointeur_u_int);
    
    long int grand_nombre = 2111111111L;
    long int *pointeur_long_int = &grand_nombre;
    printf("long int : %lx | Adresse : %p\n", grand_nombre, pointeur_long_int);

    long long int tres_grand_nombre = 9223372036854775807LL;
    long long int *pointeur_long_long_int = &tres_grand_nombre;
    printf("long long int : %llx | Adresse : %p\n",tres_grand_nombre, pointeur_long_long_int);

    float pi = 3.14;
    float *pointeur_float = &pi;
    printf("float : %f | Adresse : %p\n", pi, pointeur_float);

    double flottant_precis = 3.1415926;
    double *pointeur_double = &flottant_precis;
    printf("double : %lf | Adresse : %p\n", flottant_precis, pointeur_double);

    long double flottant_tres_precis = 3.14159265358979323846L;
    long double *pointeur_long_double = &flottant_tres_precis;
    printf("long double : %LF | Adresse : %p\n", flottant_tres_precis, pointeur_long_double);



    // Modification de certaines variables

    printf("\n------------------- Modifications de certains types de variables a l'aide de pointeurs -------------------\n\n");


    *pointeur_char = 'a';
    printf("char : %c | Adresse : %p\n", lettre, pointeur_char); 

    *pointeur_u_int /= 999;
    printf("unsigned int : %x | Adresse : %p\n",nombre2, pointeur_u_int);

    *pointeur_long_long_int = 1LL;
    printf("long long int : %llx | Adresse : %p\n",tres_grand_nombre, pointeur_long_long_int);

    *pointeur_float = 3.1;
    printf("float : %f | Adresse : %p\n", pi, pointeur_float);

    return 0;
}