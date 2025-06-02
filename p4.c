#include <stdio.h>
int main()
{
    int row, col, num = 4;
    // printf("Enter Number : ");
    // scanf("%d",&num);
    for (row = 4; row > 0; row--)
    {
        for (col = 0; col <row; col++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
