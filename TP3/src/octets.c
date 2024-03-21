/*
Nom du fichier : octets.c
Objectif : Afficher les octets des types de variables
Auteur : Livio SINGARIN-SOLE
Date : 06/10/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 


// PROGRAMME
int main(void) 
{
    // affichage des variables avec leur adresse

    printf("\n------------------- Affichage de certains types de variables avec leur adresse -------------------\n\n");

    // compteur
    unsigned long long int j = 0;

    // CHAR
    char lettre = 'z';
    char *pointeur_char = &lettre;
    printf("char : %c | Adresse : %p Octets : ", lettre, pointeur_char); ;
    unsigned char *char_ptr = (unsigned char *)&lettre;
    for (j = 0; j < sizeof(char); j++) {
        printf("%02x ", char_ptr[j]);
    }
    printf("\n\n");
    
    // SHORT
    short petit_nombre = 500;
    short *pointeur_short = &petit_nombre;
    printf("short : %hd | Adresse : %p Octets : ", petit_nombre, pointeur_short);
    unsigned char *short_ptr = (unsigned char *)&petit_nombre;
    for (j = 0; j < sizeof(short); j++) {
        printf("%02x ", short_ptr[j]);
    }
    printf("\n\n");
    

    // INT
    int nombre1 = -32767;
    int *pointeur_int = &nombre1;
    printf("int : %d | Adresse : %p Octets : ", nombre1, pointeur_int);
    unsigned char *int_ptr = (unsigned char *)&nombre1;
    for (j = 0; j < sizeof(int); j++) {
        printf("%02x ", int_ptr[j]);
    }
    printf("\n\n");
    
    // Unsigned INT
    unsigned nombre2 = 32767;
    unsigned int *pointeur_u_int = &nombre2;
    printf("unsigned int : %u | Adresse : %p Octets : ",nombre2, pointeur_u_int);
    unsigned char *u_int_ptr = (unsigned char *)&nombre2;
    for (j = 0; j < sizeof(unsigned int); j++) {
        printf("%02x ", u_int_ptr[j]);
    }
    printf("\n\n");
    
    // LONG INT
    long int grand_nombre = 2111111111L;
    long int *pointeur_long_int = &grand_nombre;
    printf("long int : %ld | Adresse : %p Octets : ", grand_nombre, pointeur_long_int);
    unsigned char *long_int_ptr = (unsigned char *)&grand_nombre;
    for (j = 0; j < sizeof(long int); j++) {
        printf("%02x ", long_int_ptr[j]);
    }
    printf("\n\n");
    
    // LONG LONG INT
    long long int tres_grand_nombre = 9223372036854775807LL;
    long long int *pointeur_long_long_int = &tres_grand_nombre;
    printf("long long int : %lld | Adresse : %p Octets : ",tres_grand_nombre, pointeur_long_long_int);
    unsigned char *long_long_int_ptr = (unsigned char *)&tres_grand_nombre;
    for (j = 0; j < sizeof(long long int); j++) {
        printf("%02x ", long_long_int_ptr[j]);
    }
    printf("\n\n");
    
    // FLOAT
    float pi = 3.14;
    float *pointeur_float = &pi;
    printf("float : %.3f | Adresse : %p Octets : ", pi, pointeur_float);
    unsigned char *float_ptr = (unsigned char *)&pi;
    for (j = 0; j < sizeof(float); j++) {
        printf("%02x ", float_ptr[j]);
    }
    printf("\n\n");
    
    // DOUBLE
    double flottant_precis = 3.1415926;
    double *pointeur_double = &flottant_precis;
    printf("double : %.7lf | Adresse : %p Octets : ", flottant_precis, pointeur_double);
    unsigned char *double_ptr = (unsigned char *)&flottant_precis;
    for (j = 0; j < sizeof(double); j++) {
        printf("%02x ", double_ptr[j]);
    }
    printf("\n\n");
    
    // LONG DOUBLE
    long double flottant_tres_precis = 3.14159265358979323846L;
    long double *pointeur_long_double = &flottant_tres_precis;
    printf("long double : %LF | Adresse : %p Octets : ", flottant_tres_precis, pointeur_long_double);
    unsigned char *long_double_ptr = (unsigned char *)&flottant_tres_precis;
    for (j = 0; j < sizeof(short); j++) {
        printf("%02x ", long_double_ptr[j]);
    }
    printf("\n\n");
    

return 0;
}