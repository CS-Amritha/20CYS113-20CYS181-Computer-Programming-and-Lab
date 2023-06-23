#include<stdio.h>
int main() {
    int year;
    printf("Enter the year:");
    scanf("%d",&year);
    if (year%4==0)
    printf("leap");
    else if(year%400==0)
    printf("leap");
    else
    printf("noleap");
    return 0;
    }