#include <stdio.h> // Pour les fonctions scanf et printf

int main() {
    int n, i, j;                       // n = nombre d'éléments, i/j = compteurs
    scanf("%d", &n);                   // Lire combien d'éléments seront saisis

    int tableau[n];                   // Tableau d’origine
    int unique[n];                    // Tableau pour stocker les valeurs uniques
    int taille_unique = 0;            // Compte combien de valeurs uniques

    for(i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);     // Lire chaque élément et le stocker
    }

    for(i = 0; i < n; i++) {
        int est_doublon = 0;          // Variable pour savoir si c’est un doublon

        for(j = 0; j < taille_unique; j++) {
            if(tableau[i] == unique[j]) { // Si l’élément existe déjà dans "unique"
                est_doublon = 1;      // On note que c’est un doublon
                break;                // On arrête la recherche
            }
        }

        if(!est_doublon) {            // Si ce n’est pas un doublon
            unique[taille_unique++] = tableau[i]; // On l’ajoute au tableau unique
        }
    }

    printf("Après suppression des doublons : ");
    for(i = 0; i < taille_unique; i++) {
        printf("%d ", unique[i]);     // Afficher chaque valeur unique
    }
    printf("\n");                     // Aller à la ligne après l’affichage

    return 0;                         // Fin normale du programme
}
