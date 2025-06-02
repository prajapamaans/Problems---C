#include<stdio.h>
int main(){
    int row,col,num;
    printf("Enter Number : ");
    scanf("%d",&num);
    for(row = 0; row <= num ; row++){
        for(col = 0; col <= row; col++){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
