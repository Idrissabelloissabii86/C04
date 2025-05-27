#include <stdio.h>
#include <stdlib.h> // Pour qsort

// Fonction de comparaison pour qsort
int compare(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int n, i;

    
    scanf("%d", &n);

    int arr[n];
    
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Tri du tableau
    qsort(arr, n, sizeof(int), compare);

    // Affichage sans doublons
    printf("Après suppression des doublons : ");
    printf("%d ", arr[0]); // Toujours afficher le premier élément

    for (i = 1; i < n; i++) {
        if (arr[i] != arr[i - 1]) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");

    return 0;
}
