#include <stdio.h>
int main()
{
    int sum=0,i,avg;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof arr[0];
    for(int i = 0; i < n; i++){
        sum+=arr[i];
        avg=sum/n;
    }
        printf("%d", avg);

    return 0;
}