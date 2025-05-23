#include <stdio.h>

int main() {
    int n;

    // Lire le nombre d'éléments
    
    scanf("%d", &n);

    // Vérifier qu'il y a au moins deux éléments
    if (n < 2) {
        printf("Il faut au moins deux éléments pour trouver le deuxième plus grand.\n");
        return 1;
    }

    int tableau[n];

    // Lecture des éléments
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    int max = tableau[0];
    int second_max;

    // Initialisation de second_max
    // On trouve un deuxième élément différent pour initialiser correctement
    int i = 1;
    while (i < n && tableau[i] == max) {
        i++;
    }

    if (i == n) {
        // Tous les éléments sont identiques
        printf("Tous les éléments sont identiques. Pas de deuxième plus grand.\n");
        return 1;
    }

    // Déterminer qui est le max et qui est le second
    if (tableau[i] > max) {
        second_max = max;
        max = tableau[i];
    } else {
        second_max = tableau[i];
    }

    // Parcourir le reste du tableau
    for (i = i + 1; i < n; i++) {
        if (tableau[i] > max) {
            second_max = max;
            max = tableau[i];
        } else if (tableau[i] > second_max && tableau[i] != max) {
            second_max = tableau[i];
        }
    }

    // Affichage du résultat
    printf("Le deuxième plus grand nombre est : %d\n", second_max);

    return 0;
}
