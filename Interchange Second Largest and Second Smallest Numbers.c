#include <stdio.h>
#include <limits.h>

void swapSecondLargestSmallest(int arr[], int n) {
    int firstMin = INT_MAX, secondMin = INT_MAX;
    int firstMax = INT_MIN, secondMax = INT_MIN;
    int secondMinIndex = -1, secondMaxIndex = -1;

    for (int i = 0; i < n; i++) {
        if (arr[i] < firstMin) {
            secondMin = firstMin;
            secondMinIndex = i;
            firstMin = arr[i];
        } else if (arr[i] < secondMin && arr[i] != firstMin) {
            secondMin = arr[i];
            secondMinIndex = i;
        }

        if (arr[i] > firstMax) {
            secondMax = firstMax;
            secondMaxIndex = i;
            firstMax = arr[i];
        } else if (arr[i] > secondMax && arr[i] != firstMax) {
            secondMax = arr[i];
            secondMaxIndex = i;
        }
    }

    int temp = arr[secondMinIndex];
    arr[secondMinIndex] = arr[secondMaxIndex];
    arr[secondMaxIndex] = temp;
}

int main() {
    int arr[] = {12, 35, 1, 10, 34, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    swapSecondLargestSmallest(arr, n);

    printf("Array after swapping second largest and second smallest: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
