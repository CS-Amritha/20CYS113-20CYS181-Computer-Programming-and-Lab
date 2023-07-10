#include<stdio.h>

#define NUM 5

int main() {
    int i, x, y, z;
    char names[NUM][20];
    int ebNumbers[NUM];
    int units[NUM];
    double bills[NUM];
    
    printf("Enter the names: \n");
    for(i = 0; i < NUM; i++) {
        printf("Name %d: ", i+1);
        scanf("%s", names[i]);
    }
    
    printf("Enter the EB numbers: \n");
    for(i = 0; i < NUM; i++) {
        printf("%d: ", i+1);
        scanf("%d", &ebNumbers[i]);
    }
    
    printf("Enter the electricity units :\n");
    for(i = 0; i < NUM; i++) {
        printf("%d: ", i+1);
        scanf("%d", &units[i]);
    }
    
    for(i = 0; i < NUM; i++) {
        if(units[i] == 100) {
            bills[i] = 0;
        }
        else if(units[i] > 100 && units[i] <= 400) {
            x = units[i] - 100;
            bills[i] = (double) x * 2.25;
        }
        else if(units[i] > 400 && units[i] <= 500) {
            x = units[i] - 100;
            y = x - 300;
            bills[i] = (300 * 2.25) + ((double) y * 4.50);
        }
        else if(units[i] > 500) {
            x = units[i] - 100;
            y = x - 300;
            z = y - 100;
            bills[i] = (300 * 2.25) + (100 * 4.50) + ((double) z * 6.00);
        }
        else {
            printf("Invalid units ! %d.\n", i+1);
            bills[i] = 0;
        }
    }
    
    for (i = 0; i < NUM; i++) {
        printf("%d: Name: %s, EB Number: %d, Units: %d, Bill Amount: %.2lf\n",
               i+1, names[i], ebNumbers[i], units[i], bills[i]);
    }
    
    return 0;
}


