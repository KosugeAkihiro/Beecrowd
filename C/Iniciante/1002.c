#include <stdio.h>
 
int main() {

    double pi, r, area;

    scanf("%lf", &r);

    pi=3.14159;
    area = pi*r*r;

    printf("A=%.4f\n", area);
 
    return 0;
}