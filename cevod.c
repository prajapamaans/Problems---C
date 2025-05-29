#include <stdio.h>
int main()
{
    int sum=0,i,even=0,odd=0;
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof arr[0];
    for(int i = 0; i < n; i++){
       if(arr[i]%2==0){
           even++;
       }else{
           odd++;
       }
    }
    printf("even num is %d and odd num is %d",even,odd);
       

    return 0;
}