#include <stdio.h>
 
int main() {
 
    int c, np, c2, np2;
    float vu, vu2, vt=0;

    scanf("%d %d %f",&c, &np, &vu);
    scanf("%d %d %f",&c2, &np2, &vu2);

    vt = np*vu + np2*vu2;

    printf("VALOR A PAGAR: R$ %.2f\n",vt);
 
    return 0;
}