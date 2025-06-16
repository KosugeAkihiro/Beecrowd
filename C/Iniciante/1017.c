#include <stdio.h>
 
int main() {
 
    int t, vm, dt;
    float res;

    scanf("%d %d", &t, &vm);

    dt = t*vm;
    res = dt/12.0;
    
    printf("%.3f\n",res);
 
    return 0;
}