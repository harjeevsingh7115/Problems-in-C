#include <stdio.h>

int sumArray(int arr[], int n) {
    if (n <= 0)
        return 0; // Base case
    return arr[n - 1] + sumArray(arr, n - 1); // Recursive case
}

int main() {
    int n;
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Sum of array elements: %d\n", sumArray(arr, n));
    return 0;
}
