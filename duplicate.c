#include <stdio.h>
int main()
{

    int arr[] = {1, 2, 37, 48, 56, 37, 2, 48};
    int n = sizeof(arr) / sizeof arr[0];
    int freq[] = {0};
    int result[n];
    int k = 0;

    for(int i = 0; i < n; i++){
        if(freq[arr[i]] == 0){
            result[k++] = arr[i];
            freq[arr[i]] = 1;
        }
    }
    printf("array after removing duplicate array:\n");
     for(int i = 0; i < n; i++){
        printf("%d , ",result[i]);
     }
    return 0;
}