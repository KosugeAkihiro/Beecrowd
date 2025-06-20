#include <stdio.h>
 
int main() {
 
    int h1, h2, ht;
    scanf("%d %d", &h1, &h2);
    
    if (h2-h1 > 0) {
        ht = h2-h1;
        printf("O JOGO DUROU %d HORA(S)\n", ht);
    }
    else {
        ht = 24-(h1-h2);
        printf("O JOGO DUROU %d HORA(S)\n", ht);
    }
 
    return 0;
}