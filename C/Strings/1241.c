#include <stdio.h>
#include <string.h>
 
int main() {
 
    int N;
    scanf("%d", &N);

    char A[1001], B[1001];

    while(N--){
        scanf("%s %s",&A, &B);
        if(strlen(A) < strlen(B))
            printf("nao encaixa\n");
        else {
            strcpy(A, A+(strlen(A)-strlen(B)));
            if(!strcmp(A,B))
                printf("encaixa\n");
            else printf("nao encaixa\n");
        }
    }
 
    return 0;
}