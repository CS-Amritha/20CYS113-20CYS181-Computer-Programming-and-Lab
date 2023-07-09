#include<stdio.h>

int main()
{
    int r, s, i, j, k;
    scanf("%d", &r);
    for(i = 1; i <= r; i++)
    {
        k = 9;
        for(s = 1; s <= r - i; s++)
        {
            printf("  ");
        }
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", k);
            k--;
        }
        printf("\n");
    }
    for(i = r - 1; i >= 0; i--)
    {
        k = 9;
        for(s = 1; s <= r - i; s++)
        {
            printf("  ");
        }
        for(j = 1; j <= 2 * i - 1; j++)
        {
            printf("%d ", k);
            k--;
        }
        printf("\n");
    }
}
