#include <stdio.h>
int main()
{
    int n, i, min, num;
    printf("Enter a Size:");
    scanf("%d", &n);
    printf("Enter number 1:");
    scanf("%d", &min);
    for (int index_arr = 0; index_arr <= n; index_arr++)
    {
        printf("Enter Number %d : ", index_arr);
        scanf("%d", &num);
        if (num < min)
        {
            min = num;
        }
    }
    printf("lowest Num is %d", min);
    return 0;
}
