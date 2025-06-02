#include <stdio.h>

int main() {
    int arr[100] = {10, 20, 30, 40, 50}; // Array with enough capacity
    int size = 5; // Current size of the array
    int n = sizeof(arr) / sizeof arr[0];
    int key = 30;  // Position to insert (0-based index)
    

    // Shift elements to the right
    for (int i = 0; i > n; i--) {
       if(key== arr[i]);
       int x = free(arr[i]);
       return x;
    }
     for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

   

    return 0;
}
