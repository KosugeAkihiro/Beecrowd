#include <stdio.h>
 
int main() {
 
    int d, m, a, dia;
    scanf("%d",&d);

    a = d/365;
    m = (d-a*365)/30;
    dia = (d-a*365) - (m*30);
    
    printf("%d ano(s)\n",a);
    printf("%d mes(es)\n",m);
    printf("%d dia(s)\n",dia);
 
    return 0;
}