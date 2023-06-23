#include <stdio.h>

int decimalToBinary(int n){
    int b[32];
    int i=0;
    int temp=n;
    while(temp>0){
        b[i]=temp%2;
        temp=temp/2;
        i++;
    }
    printf("Binary equivalent: ");
    for(int j=i-1;j>= 0;j--){
        printf("%d",b[j]);
    }
    printf("\n");
    return 0;
}

int decimalToOctal(int n){
    int o[32];
    int i=0;
    int temp=n;
    while(temp>0){
        o[i]=temp%8;
        temp=temp/8;
        i++;
    }
    printf("Octal equivalent: ");
    for(int j=i-1;j>= 0;j--){
        printf("%d",o[j]);
    }
    printf("\n");
    return 0;
}

int decimalToHexadecimal(int n){
    char h[100];
    int i=0;
    int rem;
    int temp=n;
    while(temp>0){
        rem=temp%16;
        if (rem<10)
            h[i]=rem+'0';
        else
            h[i]=rem+55;
        temp=temp/16;
        i++;
    }
    printf("Hexadecimal equivalent: ");
    for (int j =i-1;j>=0;j--)
        printf("%c",h[j]);
    
    printf("\n");
}
    
int main(){
    int n,r1,r2,r3;
    scanf("%d",&n);
    if(n<=0){
        printf("Error: Value should be greater than 0");
    }
    else{r1=decimalToBinary(n);
    r2=decimalToOctal(n);
    r3=decimalToHexadecimal(n);
    }
    return 0;
}