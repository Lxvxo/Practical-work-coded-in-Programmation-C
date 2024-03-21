/*
Nom du fichier : chercher2.c
Objectif : chercher si une phrase est présente dans une liste de phrases
Auteur : Livio SINGARIN-SOLE
Date : 07/10/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 
#include <string.h>

// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define TAILLE_MAX_PHRASE 50 // Taille maximum d'une phrase
#define NB_PHRASES 10 // Nombres de phrases 


typedef enum Booleen // True ou False
{
    false = 0,true = 1 
}bool;



// FONCTIONS

// remplace le saut de ligne d'un str par un caractère de fin de chaine
char remplace_saut_ligne(char str[TAILLE_MAX_PHRASE])
{
    int i =0 ;
    while (str[i] != '\0')
    {
        if (str[i] == '\n')
        {
            str[i] = '\0';
            break;
        };
        i++;
    }
}

// Cherche une phrase dans la liste des phrases
enum Booleen chercher_phrase(char Tab_phrases[NB_PHRASES][TAILLE_MAX_PHRASE], char phrase[TAILLE_MAX_PHRASE])
{
    enum Booleen result = false;
    int i;
    for (int k = 0; k< NB_PHRASES; k++)
    {  

        i = 0;
        int verif = true;
        while (Tab_phrases[k][i] != '\0' && phrase[i] != '\0') // on teste les caractères tant que l'une des deux chaines n'est pas fini
        {
           if (Tab_phrases[k][i] != phrase[i])
           {
               verif = false;
               break;
           };
        i++;
        };
        // Si les deux derniers indices sont des caractères de fin de chaine 
        // et si tous les caractères précédant sont identiques 
        // alors les deux chaines sont les mêmes.
        if (Tab_phrases[k][i] == '\0' && phrase[i] == '\0' && verif)
        {
            result = true;
            break;
        };
    };
    
    return result;
};

// PROGRAMME 

int main(void)
{
    // Initialisation du tableau de phrases
    char Tab_phrases[NB_PHRASES][TAILLE_MAX_PHRASE] = {"L'informatique est sympa\0","Les bits sont les unités de base\0",
    "La division est une opération mathématique\0","Les algorithmes résolvent des problèmes\0",
    "Les virus infectent les ordinateurs\0","Les graphes sont des structures\0","Les nombres premiers sont spéciaux\0",
    "La logique guide les calculs\0","Les cookies suivent votre activité\0","Les équations ont des solutions\0"};

    
    // initialisation de la chaine a rechercher 
    char phrase_recherche[TAILLE_MAX_PHRASE];
    printf("\nEntrez la phrase a rechercher : ");
    
    fgets(phrase_recherche, sizeof(phrase_recherche), stdin); // on utilise fgets pour saisir une chaine avec des espaces
    remplace_saut_ligne(phrase_recherche);

    // Recherche de la phrase
    enum Booleen result = chercher_phrase( Tab_phrases , phrase_recherche);

    if (result)
    {
        printf("\nPresent\n");
    }
    else
    {
        printf("\nAbsent\n");
    }


    return 0;
}