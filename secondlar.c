#include <stdio.h>
int main()
{
    int arr[] = {1, 2, 37, 48, 56, 90, 32, 87, 54, 5};
    int n = sizeof(arr) / sizeof arr[0];
    int first = 0, second = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        }
        else if (arr[i] > second && arr[i] != first) 
        {
            second = arr[i];
        }
    }
    printf("second largest element is %d", second);

    return 0;
}