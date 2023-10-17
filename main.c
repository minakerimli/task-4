
#include <stdio.h>

int main() {
    int m, n;

    printf("Enter the size of the first array (arr1): ");
    scanf("%d", &m);

    int arr1[m];
    printf("Enter the elements of the first array (sorted):\n");
    for (int i = 0; i < m; i++) {
        scanf("%d", &arr1[i]);
    }

    printf("Enter the size of the second array (arr2): ");
    scanf("%d", &n);

    int arr2[n];
    printf("Enter the elements of the second array (sorted):\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr2[i]);
    }

    int result[m + n];

    int i = 0, j = 0, k = 0;

    while (i < m && j < n) {
        if (arr1[i] < arr2[j]) {
            result[k] = arr1[i];
            i++;
        } else {
            result[k] = arr2[j];
            j++;
        }
        k++;
    }

    while (i < m) {
        result[k] = arr1[i];
        i++;
        k++;
    }

    while (j < n) {
        result[k] = arr2[j];
        j++;
        k++;
    }

    printf("Merged Array: ");
    for (int i = 0; i < m + n; i++) {
        printf("%d ", result[i]);
    }

    return 0;
}
