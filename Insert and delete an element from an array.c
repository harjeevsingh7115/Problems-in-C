#include <stdio.h>

int main() {
    int n, i, j, elem;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int a1[n + 1];
    printf("Enter %d elements: ", n);
    for (int k = 0; k < n; k++) {
        scanf("%d", &a1[k]);
    }

    printf("Enter position (i) to insert an element: ");
    scanf("%d", &i);
    printf("Enter element to insert: ");
    scanf("%d", &elem);

    for (int k = n; k >= i; k--) {
        a1[k] = a1[k - 1];
    }
    a1[i - 1] = elem;
    n++;

    printf("Array after insertion: ");
    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");

    printf("Enter position (j) to delete an element: ");
    scanf("%d", &j);

    for (int k = j - 1; k < n - 1; k++) {
        a1[k] = a1[k + 1];
    }
    n--;

    printf("Array after deletion: ");
    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");

    return 0;
}
