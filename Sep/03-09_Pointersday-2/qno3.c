#include <stdio.h>

// Function to rotate the array to the right by 'positions' positions
void rotateRight(int *arr, int size, int positions) {
    // Handle cases where positions is greater than size
    positions = positions % size;

    // Temporary array to store the rotated elements
    int temp[positions];

    // Step 1: Store the last 'positions' elements in the temp array
    for (int i = 0; i < positions; i++) {
        temp[i] = *(arr + size - positions + i);
    }

    // Step 2: Shift the rest of the elements to the right
    for (int i = size - 1; i >= positions; i--) {
        *(arr + i) = *(arr + i - positions);
    }

    // Step 3: Place the elements from the temp array at the beginning
    for (int i = 0; i < positions; i++) {
        *(arr + i) = temp[i];
    }
}

int main() {
    int size, positions;

    // Input: size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Ensure size is valid
    if (size <= 0) {
        printf("Array size should be greater than 0.\n");
        return 1;
    }

    int arr[size];

    // Input: elements of the array
    printf("Enter %d elements: ", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    // Input: number of positions to rotate
    printf("Enter the number of positions to rotate to the right: ");
    scanf("%d", &positions);

    // Handle invalid positions input
    if (positions < 0) {
        printf("Number of positions should be non-negative.\n");
        return 1;
    }

    // Display the array before rotation
    printf("Before rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");

    // Rotate the array to the right
    rotateRight(arr, size, positions);

    // Display the array after rotation
    printf("After rotation: ");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) {
            printf(", ");
        }
    }
    printf("\n");

    return 0;
}
