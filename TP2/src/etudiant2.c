/*
Nom du fichier : etudiant.c
Objectif : Gérer une classe d'étudiant 2
Auteur : Livio SINGARIN-SOLE
Date : 24/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 
#include <string.h>

// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define STR_TAILLE_MAX 50  // taille maximal d'une chaine de caractères dans le programme
#define NB_ETUDIANTS 5 // nombre d'étudiants

// Structure pour un Eleve
typedef struct Eleve
{
    char nom[STR_TAILLE_MAX];
    char prenom[STR_TAILLE_MAX];
    char adresse[STR_TAILLE_MAX];
    float note1;
    float note2;
}Etudiant;

// PROGRAMME
int main(void)
{

    // création du tableau

    struct Eleve Liste_eleve[NB_ETUDIANTS];


    // Saisie des informations
    int i;
    char nom[STR_TAILLE_MAX];
    char prenom[STR_TAILLE_MAX];
    char adresse[STR_TAILLE_MAX];
    float note1;
    float note2;

    for (i=0;i<NB_ETUDIANTS;i++)
    {
        printf("\n\n\n--------------  Progression ( Remplacez vos espaces par _ ) %d/%d  --------------\n\n",i+1,NB_ETUDIANTS);

        printf("NOM : ");
        scanf("%s",nom);
        strcpy(Liste_eleve[i].nom,nom);
    
        printf("PRENOM : ");
        scanf("%s",prenom);
        strcpy(Liste_eleve[i].prenom,prenom);

        printf("Adresse : ");
        scanf("%s",adresse);
        strcpy(Liste_eleve[i].adresse,adresse);

        printf("Note de programmation : ");
        scanf("%f",&note1);
        Liste_eleve[i].note1 = note1;

        printf("Note de systeme d'exploitation : ");
        scanf("%f",&note2);
        Liste_eleve[i].note2 = note2;


    }   

    
    // Affichage
    printf("\n\nAffichage des informations :\n");
    int h;
    for (h = 0; h<NB_ETUDIANTS; h++)
        {
            printf("\n\n\n--------------  Etudiant %d  --------------\n\n",h+1);
             printf("NOM : %s\nPRENOM :%s\nAdresse : %s\nNote de programmation : %.2f\nNote de systeme d'exploitation : %.2f\n"
             ,Liste_eleve[h].nom,Liste_eleve[h].prenom,Liste_eleve[h].adresse,Liste_eleve[h].note1,Liste_eleve[h].note2);

        }

    return 0;
}