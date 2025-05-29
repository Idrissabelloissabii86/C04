#include <stdio.h> // Inclusion de la bibliothèque standard pour les entrées/sorties

int main() {
    int n; // Variable pour stocker le nombre d'éléments du tableau

    // Demande à l'utilisateur combien d'éléments il veut entrer
    scanf("%d", &n); // Lecture du nombre d'éléments

    int arr[n];      // Tableau d'origine
    int result[n];   // Tableau pour stocker les éléments sans doublons

    int i, j, k = 0; // i et j sont des indices de boucle, k est l'indice pour le tableau "result"
    int isDuplicate; // Variable booléenne pour indiquer si un élément est un doublon

    // Lecture des éléments du tableau depuis l'utilisateur
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Lecture de chaque élément
    }

    // Parcours du tableau pour supprimer les doublons
    for (i = 0; i < n; i++) {
        isDuplicate = 0; // Réinitialisation du drapeau pour chaque élément

        // Vérifie si l'élément actuel existe déjà dans le tableau "result"
        for (j = 0; j < k; j++) {
            if (arr[i] == result[j]) {
                isDuplicate = 1; // Marque comme doublon si trouvé
                break;           // Arrête la boucle interne, pas besoin de continuer
            }
        }

        // Si ce n'est pas un doublon, on l'ajoute dans "result"
        if (!isDuplicate) {
            result[k++] = arr[i]; // Ajoute à "result" et incrémente k
        }
    }

    // Affichage du tableau après suppression des doublons
    printf("Après suppression des doublons : ");
    for (i = 0; i < k; i++) {
        printf("%d ", result[i]); // Affiche chaque élément unique
    }
    printf("\n"); // Saut de ligne final

    return 0; // Fin normale du programme
}
