#include <stdio.h>
int main()
{
    int arr1[] = {1, 3, 5, 7};
    int arr2[] = {2, 4, 6, 8, 10};
    int merged[100];
    int n = 4, n1 = 5;
    int i=0, j=0, k=0;
    while (i < n && j < n1)
    {
        if (arr1[i] < arr2[j])
        {
            merged[k++] = arr1[i++];
        }
        else
        {
            merged[k++] = arr2[j++];
        }
    }

    while (i < n)
    {
        merged[k++] = arr1[i++];
    }
    while (j < n1)
    {
        merged[k++] = arr2[j++];
    }

    printf("Merged sorted array: ");
    for (int x = 0; x < k; x++)
    {
        printf("%d ", merged[x]);
    }

    return 0;
}