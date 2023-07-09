#include<stdio.h>

void main() {
    int i,j,r;
    
    
    scanf("%d",&r);
    for(i=r;i>=1;i--) {
        for(j=1;j<=r-i;j++){
            printf("  ");
        }
        for(j=1;j<=(2*i-1);j++) {
            printf("%c ",67+j);
        }
        printf("\n");
    }
    
    for(i=2;i<=r;i++) {
        for(j=1;j<=r-i;j++){
            printf("  ");
        }
        for(j=1;j<=(2*i-1);j++) {
            printf("%c ",67+j);
        }
        printf("\n");
    }
} 