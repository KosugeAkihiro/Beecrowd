#include <stdio.h>
 
int main() {
 
    double salf, valor, total;

    char nome[20];

    scanf("%s", nome);
    scanf("%lf", &salf);
    scanf("%lf", &valor);

    total = salf + valor*0.15;
    
    printf("TOTAL = R$ %.2lf\n",total);
 
    return 0;
}