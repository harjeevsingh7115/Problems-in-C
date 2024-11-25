#include <stdio.h>

void moveZeroesToEnd(int arr[], int n) {
    int count = 0; // Count of non-zero elements

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[count++] = arr[i]; // Move non-zero element forward
        }
    }

    while (count < n) {
        arr[count++] = 0; // Fill remaining positions with zeroes
    }
}

int main() {
    int arr[] = {0, 1, 9, 8, 4, 0, 0, 2, 7, 0, 6, 0, 9};
    int n = sizeof(arr) / sizeof(arr[0]);

    moveZeroesToEnd(arr, n);

    printf("Array after moving zeroes to end: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
