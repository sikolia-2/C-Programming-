#include <stdio.h>

void displayArray(int arr[], int size) {
    printf("Array elements: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[5];
    int sum = 0;
    float average;
    int temp;

    // Initialize the array with user input
    printf("Enter 5 integers:\n");
    for (int i = 0; i < 5; i++) {
        scanf("%d", &arr[i]);
    }

    // Display the array elements
    displayArray(arr, 5);

    // Find the sum of elements
    for (int i = 0; i < 5; i++) {
        sum += arr[i];
    }

    // Calculate the average
    average = (float)sum / 5;

    printf("Sum of array elements: %d\n", sum);
    printf("Average of array elements: %.2f\n", average);

    // Sort the array in ascending order
    for (int i = 0; i < 5; i++) {
        for (int j = i + 1; j < 5; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // Display the sorted array
    printf("Sorted array in ascending order: ");
    displayArray(arr, 5);

    return 0;
}
