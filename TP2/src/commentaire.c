/*
Nom du fichier : commentaire_2.c
Objectif : Affichage d'un long double
Auteur : Livio SINGARIN-SOLE
Date : 24/09/2023
Commentaires suplémentaire :
*/

#include <stdio.h>
// J'obtiens une erreur à l'affichage des long double, il y a toujours le nombre 0.000000 sur windows 10
int main() {
    long double flottant_tres_precis = 3.1415926L;
    
    printf("long double : %LF", flottant_tres_precis);
    
    return 0;
}
