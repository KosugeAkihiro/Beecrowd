#include <stdio.h>
 
int main() {
 
    int x;
    float y, kmp;

    scanf("%d %f", &x, &y);

    kmp = (float)x/y;

    printf("%.3f km/l\n",kmp);
 
    return 0;
}