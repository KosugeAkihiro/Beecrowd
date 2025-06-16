#include <stdio.h>
 
int main() {
 
    int n, h;

    float sal, salt;

    scanf("%d %d %f", &n, &h, &sal);

    salt = sal*h;

    printf("NUMBER = %d\n",n);

    printf("SALARY = U$ %.2f\n",salt);
 
    return 0;
}