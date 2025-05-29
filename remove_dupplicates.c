#include <stdio.h> // Inclusion de la bibliothèque standard d'entrée/sortie

int main() {
    int a, i, j; // Déclaration de trois variables entières : 
                 // 'a' pour la taille du tableau, 'i' et 'j' comme indices de boucle
    
    scanf("%d", &a); // Lecture de la taille du tableau entrée par l'utilisateur

    int tableau[a];       // Déclaration d'un tableau de taille 'a' pour stocker les éléments saisis
    int unique[a];        // Déclaration d'un tableau de même taille pour stocker les éléments uniques
    int taille_unique = 0; // Compteur pour suivre le nombre d'éléments uniques ajoutés

    // Boucle pour lire les éléments dans le tableau principal
    for(i = 0; i < a; i++) {
        scanf("%d", &tableau[i]); // Lecture de chaque élément du tableau
    }

    // Boucle principale pour parcourir chaque élément du tableau
    for(i = 0; i < a; i++) {
        int est_doublon = 0; // Variable booléenne pour vérifier si l'élément est un doublon

        // Boucle pour comparer l'élément courant aux éléments déjà présents dans le tableau 'unique'
        for(j = 0; j < taille_unique; j++) {
            if(tableau[i] == unique[j]) { // Si l'élément est déjà présent
                est_doublon = 1;          // Marquer comme doublon
                break;                    // Sortir de la boucle car doublon détecté
            }
        }

        if(!est_doublon) { // Si l'élément n'est pas un doublon
            unique[taille_unique++] = tableau[i]; // L'ajouter dans le tableau 'unique' et incrémenter la taille
        }
    }

    // Affichage du tableau après suppression des doublons
    printf("Après suppression des doublons : ");
    for(i = 0; i < taille_unique; i++) {
        printf("%d ", unique[i]); // Affichage de chaque élément unique
    }
    printf("\n"); // Saut de ligne final

    return 0; // Fin du programme avec succès
}
