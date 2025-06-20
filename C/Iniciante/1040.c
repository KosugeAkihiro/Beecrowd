#include <stdio.h>
 
int main() {
 
    float n1, n2, n3, n4, ne, media, mf;
    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
    media=(n1*2 + n2*3 + n3*4 + n4)/(2+3+4+1);
    printf("Media: %.1f\n", media);
    if(media>=7.0)
    {
        printf("Aluno aprovado.\n");
    }
    else {
        if(media>=5.0 && media<=6.9)
        {
            printf("Aluno em exame.\n");
            scanf("%f", &ne);

            printf("Nota do exame: %.1f\n", ne);
            mf = (ne + media)/2;

            if(mf>=5.0)
            {
                printf("Aluno aprovado.\n");
                printf("Media final: %.1f\n", mf);
            }
            else {
                printf("Aluno reprovado.\n");
                printf("Media final: %.1f\n", mf);
            }
        }
        else {
            printf("Aluno reprovado.\n");
        }
    }
 
    return 0;
}