/*
Nom du fichier : couleurs.c
Objectif : Dans une liste de couleurs, trouver les occurences
Auteur : Livio SINGARIN-SOLE
Date : 06/10/2023
Commentaires suplémentaire : La probabilité d'obtenir deux couleurs identiques est très faible.
Il faut donc augmenter le nombre de couleurs afin d'observer plus de couleurs récurentes.
*/


// BIBLIOTHEQUES
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


// CONSTANCES DEFINIES PAR L'UTILISATEUR
#define NB_COULEURS 1000 // nombre de couleurs


// Structure d'une couleur
typedef struct couleur
{
    int R;
    int G;
    int B;
    int A;
}color;

// Structure pour stocker un tableau de couleur avec leur nombre d'occurence
typedef struct tab_couleurs
{
    int taille_reelle; // nombres de couleurs différentes
    struct couleur tab[NB_COULEURS]; // tableau contenants les couleurs différentes
    int Tab_occurences[NB_COULEURS]; // stocke l'occurence de chaque couleur

}t_c;

// FONCTIONS 

// vérifie si la couleur est dans le tableau 
int verif_couleurs(struct couleur c1,struct couleur c2)
{
    int verif = 0;
    if (c1.R == c2.R)
    {
        if (c1.G == c2.G)
        {
            if (c1.B == c2.B)
            {
                if (c1.A == c2.A)
                {
                    verif = 1;
                }
            }
        }
    }
    return verif;
}



// PROGRAMME
int main(void)
{

    // création du tableau des couleurs
    struct couleur Liste_couleurs[NB_COULEURS];

    // initialisation des couleurs

    Liste_couleurs[0].R = 0x15;
    Liste_couleurs[0].G = 0x20;
    Liste_couleurs[0].B = 0xAC;
    Liste_couleurs[0].A = 0xFF;


    // sélection aléatoires des autres couleurs

    srand( time( NULL ) );
    int i;
    for (i=1 ; i<NB_COULEURS; i++)
    {
        Liste_couleurs[i].R = rand() % 256; 
        Liste_couleurs[i].G = rand() % 256; 
        Liste_couleurs[i].B = rand() % 256; 
        Liste_couleurs[i].A = rand() % 256; 
    }

    // AFFICHAGE SANS LES OCCURENCES
    int h;
        printf("\n\n\n--------------  Couleurs (sans occurences) --------------\n\n");
    for (h=0 ; h<NB_COULEURS; h++)
    {


        printf("R : %d | G : %d | B : %d | alpha : %d\n",Liste_couleurs[h].R,Liste_couleurs[h].G,Liste_couleurs[h].B,Liste_couleurs[h].A);


    }
    // Intialisation du tableau
    struct tab_couleurs Tab_couleurs;
    Tab_couleurs.taille_reelle = 1;
    Tab_couleurs.tab[0] = Liste_couleurs[0];
    Tab_couleurs.Tab_occurences[0] = 1;

    //On teste pour toutes les autres couleurs si deux sont identiques 
    for (int c = 1; c<NB_COULEURS;c++)
    {
        int verif = 0;
        for (int k=0; k < Tab_couleurs.taille_reelle;k++)
        {   
            // CAS OU LES COULEURS SONT IDENTIQUES
            if (verif_couleurs(Liste_couleurs[c],Tab_couleurs.tab[k]))
                {
                    verif = 1;
                    Tab_couleurs.Tab_occurences[k] = Tab_couleurs.Tab_occurences[k] + 1;
                    break;  
                };
        }
        // CAS OU LES COULEURS SONT DIFFERENTES
        if (verif == 0)
        {
            Tab_couleurs.tab[Tab_couleurs.taille_reelle] = Liste_couleurs[c]; 
            Tab_couleurs.Tab_occurences[Tab_couleurs.taille_reelle] = 1 ; 
            Tab_couleurs.taille_reelle = Tab_couleurs.taille_reelle + 1;
            
        }
    }

    // AFFICHAGE AVEC LES OCCURENCES
    printf("\n\n\n--------------  Couleurs (avec occurences) --------------\n\n");
    for (h=0 ; h<Tab_couleurs.taille_reelle; h++)
    {
        
    
    
    printf("R : %d | G : %d | B : %d | alpha : %d | Occurences : %d\n",Tab_couleurs.tab[h].R,Tab_couleurs.tab[h].G,Tab_couleurs.tab[h].B,Tab_couleurs.tab[h].A,Tab_couleurs.Tab_occurences[h]);

    
    }
    printf("\nIl y a %d couleurs differentes sur les %d couleurs choisies.\n", Tab_couleurs.taille_reelle,NB_COULEURS);
    return 0;
}