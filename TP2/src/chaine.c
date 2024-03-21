/*
Nom du fichier : chaine.c
Objectif : Manipulation de Chaînes de Caractères
Auteur : Livio SINGARIN-SOLE
Date : 24/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 


// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define STR_TAILLE_MAX 256 // Taille maximal d'une chaine de caractère dans le programme


// FONCTIONS

// calculer la taille d'une chaine de caractère
int str_taille(char str[]) 
{
    signed char lettre = ' ' ;
    int index = 0;
    while (lettre != '\0')
    {
        lettre = str[index];
        if (lettre == '\0')
        {
            break;
        }
        else
        {
            index +=1;
        }
        
    }
    return index;
    


}
// copier une chaine de caractère dans une autre
void str_copy(char str[], char copie[]) 
{
    int N = str_taille(str);

    int i;
    for (i=0 ; i<N ; i++)
    {
        copie[i] = str[i];
    }
    
}

// concaténer deux chaines de caractère
char* str_concat(char str1[], char str2[]) 
{

    int N1 = str_taille(str1);
    int N2 = str_taille(str2);

    int N3 = N1 + N2;

    static char str3[STR_TAILLE_MAX];

    int i;
    for (i=0 ; i<N1 ; i++)
    {
        str3[i] = str1[i];
    }
    
    for (i=0 ; i<N2 ; i++)
    {
        str3[N1 + i] = str2[i];
    }

    str3[N3] = '\0';

    return str3;

}
 
// PROGRAMME
int main(void)
{
    // initialisation des tableaux
    char prenom[] = "LIVIO";

    char nom[] = " SINGARIN-SOLE";

    // Calcul de la taille du prénom
    printf("Le prenom %s contient %d lettres\n", prenom, str_taille(prenom));
    
    // Copie d'une chaine de caractère
    char nom_copie[STR_TAILLE_MAX];
    str_copy(nom, nom_copie);
    printf("NOM : %s\n", nom_copie);

    // Concaténation de deux chaines de caractères
    char* str3 = str_concat(prenom, nom);
    printf("NOM ET PRENOM : %s\n", str3);

    return 0;
}

