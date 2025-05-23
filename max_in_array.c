#include <stdio.h>

int main() {
    int n;

    // Demander à l'utilisateur combien d'éléments il souhaite entrer
    
    scanf("%d", &n);

    // Déclaration d'un tableau de taille n
    int tableau[n];

    // Lecture des éléments du tableau
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]); // Lire chaque élément un par un
    }

    // Initialiser le maximum avec le premier élément du tableau
    int max = tableau[0];

    // Parcourir le reste du tableau pour trouver le maximum
    for (int i = 1; i < n; i++) {
        if (tableau[i] > max) {
            max = tableau[i]; // Mettre à jour le maximum si un élément plus grand est trouvé
        }
    }

    // Affichage du plus grand élément trouvé
    printf("Le maximum est : %d\n", max);

    return 0;
}
