#include<stdio.h>
int main(){
    int row,col,num;
    printf("Enter Number : ");
    scanf("%d",&num);
    for(row = 0; row < num ; row++){
        for(col = 0; col < num; col++){
            if(row == 0 || row == num - 1|| col == 0 || col == num - 1){
                printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
