#include <stdio.h>

int main()
{
    int arr[100] = {10, 20, 30, 40, 50}; // Array with enough capacity
    int size = 5;  
    int pos;                      // Current size of the array
   
    int key = 30; // Position to insert (0-based index)


    pos = 2;
     // Shift elements to the right
    for (int i = pos; i < size; i++) {
        arr[i] = arr[i + 1];
    }

    
    size--; // Update the size


    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
