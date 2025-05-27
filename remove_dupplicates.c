#include <stdio.h>

int main() {
    int n, i, j;
    
    // Demander combien d'éléments l'utilisateur veut entrer
    printf("Combien de nombres allez-vous entrer ? ");
    scanf("%d", &n);

    int tableau[n];        // Le tableau original
    int sans_doublons[n];  // Le tableau pour stocker les valeurs uniques
    int taille = 0;        // Compteur pour les éléments uniques

    // Saisie des éléments
    printf("Entrez les nombres :\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &tableau[i]);
    }

    // Supprimer les doublons
    for (i = 0; i < n; i++) {
        int est_deja_la = 0; // On suppose que la valeur n'est pas encore dans sans_doublons

        // Vérifier si le nombre existe déjà dans sans_doublons
        for (j = 0; j < taille; j++) {
            if (tableau[i] == sans_doublons[j]) {
                est_deja_la = 1; // Doublon trouvé
                break;
            }
        }

        // Si ce n’est pas un doublon, on l’ajoute
        if (est_deja_la == 0) {
            sans_doublons[taille] = tableau[i];
            taille++; // On augmente la taille du tableau sans doublons
        }
    }

    // Affichage du résultat
    printf("Après suppression des doublons : ");
    for (i = 0; i < taille; i++) {
        printf("%d ", sans_doublons[i]);
    }
    printf("\n");

    return 0;
}
