#include <stdio.h>
#include <math.h>
 
int main() {
 
    int s, min, h;

    scanf("%d",&s);

    min = floor(s/60);
    h = floor(min/60);

    printf("%d:%d:%d\n", h, min%=60, s%=60);
 
    return 0;
}