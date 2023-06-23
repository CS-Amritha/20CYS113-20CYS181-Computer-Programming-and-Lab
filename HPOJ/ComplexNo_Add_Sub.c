#include <stdio.h>
int main() {
int sumr,sumi,diffr,diffi;
struct complex {
    int real;
    int imag;

}
c[2];
    
    scanf("%d %d",&c[0].real,&c[0].imag);
    scanf("%d %d",&c[1].real,&c[1].imag);
    sumr=c[0].real+c[1].real;
    sumi=c[0].imag+c[1].imag;
    diffr=c[0].real-c[1].real;
    diffi=c[0].imag-c[1].imag;
    printf("%d+%di \n",sumr,sumi);
    printf("%d+%di \n",diffr,diffi);
    return 0;
}