#include <stdio.h>
 
int main() {
 
    int c, qt;
    float pt;

    scanf("%d %d", &c, &qt);

    switch(c){
        case 1:
            pt = qt*4.00;
            printf("Total: R$ %.2f\n",pt);
            break;

        case 2:
            pt = qt*4.50;
            printf("Total: R$ %.2f\n",pt);
            break;

        case 3:
            pt = qt*5.00;
            printf("Total: R$ %.2f\n",pt);
            break;

        case 4:
            pt = qt*2.00;
            printf("Total: R$ %.2f\n",pt);
            break;
            
        case 5:
            pt = qt*1.50;
            printf("Total: R$ %.2f\n",pt);
            break;
    }
 
    return 0;
}