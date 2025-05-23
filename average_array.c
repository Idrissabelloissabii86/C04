#include <stdio.h>

int main() {
    int n;

    // Lire le nombre d'éléments à traiter
    
    scanf("%d", &n);

    int tableau[n];      // Déclaration du tableau
    int somme = 0;       // Initialisation de la somme

    // Lecture des éléments du tableau et accumulation de la somme
    
    for (int i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
        somme += tableau[i]; // Ajout de chaque valeur à la somme
    }

    // Calcul de la moyenne (en float pour affichage décimal)
    float moyenne = (float)somme / n;

    // Affichage du résultat
    printf("La moyenne est : %.1f\n", moyenne);

    return 0;
}