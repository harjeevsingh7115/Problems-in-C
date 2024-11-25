#include <stdio.h>

void rearrangeArray(int arr[], int n) {
    int temp[n];
    int start = 0, end = n - 1, index = 0;

    while (start <= end) {
        if (index % 2 == 0)
            temp[index++] = arr[end--];
        else
            temp[index++] = arr[start++];
    }

    for (int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);

    rearrangeArray(arr, n);

    printf("Rearranged array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
