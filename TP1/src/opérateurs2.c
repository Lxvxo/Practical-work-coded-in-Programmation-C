/*
Nom du fichier : opérateurs2.c
Objectif : Utiliser l'opérateur switch
Auteur : Livio SINGARIN-SOLE
Date : 22/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 



// PROGRAMME
int main(void)
{
    // initialisation des deux nombres utilisés
    int num1 = 10;
    int num2 = 4;
    
    char op = '+';
    
    // Types d'opérations
    switch(op)
    {
    case '+':
        printf(" num1 + num2 = %d\n", num1+num2);
        break;

    case '-':
        printf(" num1 - num2 = %d\n", num1-num2);
        break;
        
    case '*':
        printf(" num1 x num2 = %d\n", num1 * num2);
        break;

    case '/':
        printf(" num1 / num2 = %d\n", num1/num2);
        break;

    case '%':
        printf(" num1 modulo num2 = %d\n", num1%num2);
        break;

    case '&':
        printf(" num1 & num2 = %d\n", num1 & num2);
        break;

    case '|':
        printf(" num1 | num2 = %d\n", num1|num2);
        break;

    case '~':
        printf(" ~num1 = %d\n", ~num1);
        break;

    default:
        break;
    }

    return 0;
}