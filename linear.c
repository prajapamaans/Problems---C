#include <stdio.h>
int main()
{

    int arr[] = {1, 2,9,67,45,87,65, 48};
    int n = sizeof(arr) / sizeof arr[0];
    int key = 9;
   

    for(int i = 0; i < n; i++){

        if(arr[i] == key){
            printf("%d",arr[i]);
            break;
    }else{
        printf("");
    }

    
}
    return 0;
}