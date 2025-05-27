#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int n, i, j, k;

    // Demander à l'utilisateur le nombre d'éléments à entrer
    scanf("%d", &n); // Lire la taille du tableau

    int arr[n]; // Déclaration du tableau principal

    // Saisie des éléments du tableau
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Remplir le tableau avec les valeurs entrées
    }

    // Suppression des doublons
    int result[n]; // Tableau temporaire pour stocker les éléments uniques
    int size = 0;  // Compteur pour la taille du tableau sans doublons

    for (i = 0; i < n; i++) {
        int exists = 0; // Drapeau pour indiquer si l'élément est déjà dans 'result'

        // Parcours du tableau 'result' pour vérifier les doublons
        for (j = 0; j < size; j++) {
            if (arr[i] == result[j]) {
                exists = 1; // L'élément existe déjà, on ne l'ajoutera pas
                break;
            }
        }

        // Si l'élément n'existe pas encore, on l'ajoute à 'result'
        if (!exists) {
            result[size++] = arr[i];
        }
    }

    // Affichage du tableau après suppression des doublons
    printf("Après suppression des doublons : ");
    for (i = 0; i < size; i++) {
        printf("%d ", result[i]); // Afficher chaque élément unique
    }
    printf("\n"); // Saut de ligne final

    return 0; // Fin normale du programme
}
