#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; // Array with enough capacity
    int size = 5; // Current size of the array
    int pos = 2;  // Position to insert (0-based index)
    int element = 25;

    // Shift elements to the right
    for (int i = size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    arr[pos] = element; // Insert element
    size++; // Update the size

    // Print the array
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
