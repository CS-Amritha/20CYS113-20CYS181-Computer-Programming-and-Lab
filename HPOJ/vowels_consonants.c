#include<stdio.h>

int main() {
    int flag = 0;
    char vow[10] = {'A', 'E', 'I', 'O', 'U', 'a', 'e', 'i', 'o', 'u'};
    char c;
    
    scanf("%c", &c);
    
    for (int i = 0; i < 10; i++) {
        if (c == vow[i]) {
            flag = 1;
            break;
        }
    }
    
    if (flag == 1) {
        printf("Vowel.");
    } else {
        printf("Consonant.");
    }
    
    return 0;
}