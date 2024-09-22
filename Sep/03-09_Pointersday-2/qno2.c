#include <stdio.h>
// Merges two sorted arrays into one sorted array
void mergeAndSort(int *arr1, int size1, int *arr2, int size2, int *mergedArray) {
    int i = 0, j = 0, k = 0;
    while (i < size1 && j < size2) {
        mergedArray[k++] = (arr1[i] < arr2[j]) ? arr1[i++] : arr2[j++];
    }
    while (i < size1) mergedArray[k++] = arr1[i++];  // Add remaining elements from arr1
    while (j < size2) mergedArray[k++] = arr2[j++];  // Add remaining elements from arr2
}

// Finds the median of a sorted array
double findMedian(int *mergedArray, int totalSize) {
    if (totalSize % 2 == 0)
        return (mergedArray[totalSize / 2 - 1] + mergedArray[totalSize / 2]) / 2.0;
    else
        return mergedArray[totalSize / 2];
}

int main() {
    int size1, size2;

    // Input for the first array
    printf("Enter the size of 1st array: ");
    scanf("%d", &size1);
    int arr1[size1];
    printf("Enter %d element(s): ", size1);
    for (int i = 0; i < size1; i++) scanf("%d", &arr1[i]);

    // Input for the second array
    printf("Enter the size of 2nd array: ");
    scanf("%d", &size2);
    int arr2[size2];
    printf("Enter %d element(s): ", size2);
    for (int i = 0; i < size2; i++) scanf("%d", &arr2[i]);

    // Merging and sorting arrays
    int mergedArray[size1 + size2];
    mergeAndSort(arr1, size1, arr2, size2, mergedArray);

    // Displaying the sorted merged array
    printf("After sorting Array is: ");
    for (int i = 0; i < size1 + size2; i++) printf("%d ", mergedArray[i]);

    // Finding and displaying the median
    printf("\nMedian is: %.1f\n", findMedian(mergedArray, size1 + size2));

}
