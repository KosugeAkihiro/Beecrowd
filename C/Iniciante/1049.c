#include <stdio.h>
 
int main() {
 
    char tipo[12], tipo2[8], tipo3[10];
    scanf("%s %s %s", &tipo, &tipo2, &tipo3);

    if(tipo[0]=='v')
    {
        if(tipo2[0]=='a')
        {
            if(tipo3[0]=='c')
                printf("aguia\n");
            else
                printf("pomba\n");
        }
        else if(tipo3[0]=='o') 
            printf("homem\n");
        else 
            printf("vaca\n");
    }
    else if(tipo2[0]=='i')
    {
        if(tipo3[2]=='m') 
            printf("pulga\n");
        else printf("lagarta\n");
    }
    else if(tipo3[0]=='h')
        printf("sanguessuga\n");
    else 
        printf("minhoca\n");
 
    return 0;
}