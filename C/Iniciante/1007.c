#include <stdio.h>
 
int main() {
 
    float a, b, c, d, e;

    scanf("%f %f %f %f", &a, &b, &c, &d);

    e = (a*b)-(c*d);
    
    printf("DIFERENCA = %.0f\n",e);
 
    return 0;
}