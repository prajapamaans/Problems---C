#include <stdio.h>
int main()
{
    int temp;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof arr[0];
    int start = 0, end = n - 1;

    while (start < end)
    {
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;

        start++;
        end--;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ,", arr[i]);
    }

    return 0;
}