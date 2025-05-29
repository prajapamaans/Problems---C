#include <stdio.h>
int main()
{

    int arr[] = {1, 2, 37, 4, 5};
    int n = sizeof(arr) / sizeof arr[0];
    int issorted = 1;
    for (int i = 0; i < n - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            issorted = 0;
            break;
        }
    }
    if (issorted)
    {
        printf(" array is in assending order");
    }
    else
    {
        printf(" array is not sorted");
    }
    return 0;
}