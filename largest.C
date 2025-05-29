#include <stdio.h>
int main()
{
    int n, i, max, num;
    printf("Enter a Size:");
    scanf("%d", &n);
    printf("Enter number 1:");
    scanf("%d", &max);
    for (int index_arr = 0; index_arr <= n; index_arr++)
    {
        printf("Enter Number %d : ", index_arr);
        scanf("%d", &num);
        if (num > max)
        {
            max = num;
        }
    }
    printf("largest Num is %d", max);
    return 0;
}
