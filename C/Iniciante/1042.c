#include <stdio.h>
 
int main() {
 
    int a, b, c, aux, a2, b2, c2;
    scanf("%d %d %d", &a, &b, &c);
    a2=a;
    b2=b;
    c2=c;
    if(a>b)
    {
        aux=a;
        a=b;
        b=aux;
    }
    if(a>c)
    {
        aux=a;
        a=c;
        c=aux;
    }
    if(b>c)
    {
        aux=b;
        b=c;
        c=aux;
    }
    printf("%d\n%d\n%d\n\n", a, b, c);
    printf("%d\n%d\n%d\n", a2, b2, c2);
 
    return 0;
}