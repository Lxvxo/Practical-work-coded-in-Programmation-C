/*
Nom du fichier : etudiant.c
Objectif : Gérer une classe d'étudiant 1
Auteur : Livio SINGARIN-SOLE
Date : 24/09/2023
Commentaires suplémentaire :
*/


// BIBLIOTHEQUES
#include <stdio.h> 
#include <string.h>

// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define STR_TAILLE_MAX 50 // taille maximal d'une chaine de caractères dans le programme
#define NB_ETUDIANTS 5 // nombre d'étudiants

// PROGRAMME
int main(void)
{
    // Initialisation des Tableaux
    char Noms[NB_ETUDIANTS][STR_TAILLE_MAX];
    char Prenoms[NB_ETUDIANTS][STR_TAILLE_MAX];
    char Adresses[NB_ETUDIANTS][STR_TAILLE_MAX];
    float Notes1[NB_ETUDIANTS];
    float Notes2[NB_ETUDIANTS];




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
        strcpy(Noms[i],nom);
    
        printf("PRENOM : ");
        scanf("%s",prenom);
        strcpy(Prenoms[i],prenom);

        printf("Adresse : ");
        scanf("%s",adresse);
        strcpy(Adresses[i],adresse);

        printf("Note de programmation : ");
        scanf("%f",&note1);
        Notes1[i] = note1;

        printf("Note de systeme d'exploitation : ");
        scanf("%f",&note2);
        Notes2[i] = note2;


    }   


    // Affichage
    int h;
    for (h = 0; h<NB_ETUDIANTS; h++)
        {
            printf("\n\n\n--------------  Etudiant %d  --------------\n\n",h+1);
             printf("NOM : %s\nPRENOM :%s\nAdresse : %s\nNote de programmation : %.2f\nNote de systeme d'exploitation : %.2f\n",Noms[h],Prenoms[h],Adresses[h],Notes1[h],Notes2[h]);

        }


    return 0;
}