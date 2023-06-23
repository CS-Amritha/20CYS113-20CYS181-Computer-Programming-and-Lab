#include <stdio.h>

int main() {
    int r, i, j, k, space = 1;

    
    scanf("%d", &r);

    if(r <= 0 || r >= 25) {
        printf("Invalid Input\n");
        return 0;
    }

    space = r - 1;

    for(i = 1; i <= r; i++) {
        for(j = 1; j <= space; j++) {
            printf("  ");
        }

        for(k = 1; k <= 2 * i - 1; k++) {
            printf("* ");
        }

        printf("\n");
        space--;
    }

    return 0;
}