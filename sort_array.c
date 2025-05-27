#include <stdio.h>

// Fonction pour effectuer le tri à bulles
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        // Parcours du tableau jusqu'à n-i-1 car les plus grands éléments sont déjà en place
        for (int j = 0; j < n - i - 1; j++) {
            // Échange si les éléments ne sont pas dans l'ordre
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;

    // Lecture de la taille du tableau
    scanf("%d", &n);

    int array[n];

    // Lecture des éléments du tableau
    for (int i = 0; i < n; i++) {
        scanf("%d", &array[i]);
    }

    // Appel de la fonction de tri
    bubble_sort(array, n);

    // Affichage du tableau trié
    printf("Tableau trié : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
