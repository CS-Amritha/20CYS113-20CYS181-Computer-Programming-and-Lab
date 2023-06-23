#include<stdio.h>
#include<math.h>
int main() {
    int num, temp, first, last, digits = 0;

    
    scanf("%d", &num);

    temp = num;

    
    while (temp != 0) {
        digits++;
        temp /= 10;
    }

    last = num % 10;
    first = num / (int)pow(10, digits - 1);

   
    num = num - (first * (int)pow(10, digits - 1)) + (last * (int)pow(10, digits - 1)) - last + first;

    printf("%d", num);

    return 0;
}