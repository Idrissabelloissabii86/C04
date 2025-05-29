#include <stdio.h>

int main() {
    int taille_tableau, index_saisie, index_unique;

    // Lecture de la taille du tableau
    scanf("%d", &taille_tableau);

    int valeurs[taille_tableau];            // Tableau pour stocker les valeurs saisies
    int valeurs_uniques[taille_tableau];    // Tableau pour stocker les valeurs sans doublons
    int nombre_uniques = 0;                 // Nombre d’éléments uniques ajoutés

    // Saisie des éléments dans le tableau
    for(index_saisie = 0; index_saisie < taille_tableau; index_saisie++) {
        scanf("%d", &valeurs[index_saisie]);
    }

    // Traitement pour supprimer les doublons
    for(index_saisie = 0; index_saisie < taille_tableau; index_saisie++) {
        int est_deja_present = 0; // Indique si la valeur existe déjà dans le tableau unique

        // Vérifie si la valeur est déjà présente parmi les éléments uniques
        for(index_unique = 0; index_unique < nombre_uniques; index_unique++) {
            if(valeurs[index_saisie] == valeurs_uniques[index_unique]) {
                est_deja_present = 1; // Marquer comme doublon
                break;
            }
        }

        // Si ce n’est pas un doublon, on l’ajoute au tableau des valeurs uniques
        if(!est_deja_present) {
            valeurs_uniques[nombre_uniques++] = valeurs[index_saisie];
        }
    }

    // Affichage du résultat sans doublons
    printf("Après suppression des doublons : ");
    for(index_unique = 0; index_unique < nombre_uniques; index_unique++) {
        printf("%d ", valeurs_uniques[index_unique]);
    }
    printf("\n");

    return 0;
}
