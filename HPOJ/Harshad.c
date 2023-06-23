#include <stdio.h>
int isHarshad(int num){
    int temp,sum,temp1;
    temp = num;
    sum =0;
    if (num<=0){
        return -1;
    }
    else{
        while(temp!=0){
            temp1 = temp%10;
            sum += temp1;
            temp /= 10;
        }
        if(num%sum==0){
            return 1;
        }
        else{
            return 0;
        }
    }
    }

int main() {
    int num,a;
    int isHarshad(num);
    scanf("%d",&num);
    a = isHarshad(num);
    switch(a){
        case -1:
        printf("Number should be greater than 0.");
        break;
        
        case 1:
        printf("%d is a Harshad number.",num);
        break;
        
        case 0:
        printf("%d is not a Harshad number.",num);
        break;
    }
    
   

    return 0;
}