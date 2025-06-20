#include <stdio.h>
 
int main() {
 
  int h1, min1, h2, min2, ht, mint;
  scanf("%d %d %d %d", &h1, &min1, &h2, &min2);

  if (h2-h1>0 && min2-min1>0)
  {
    ht = h2-h1;
    mint = min2-min1;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ht, mint);
  }
  else {
    if (h2-h1>0 && min1==min2)
    {
      ht=h2-h1;
      printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", ht);
    }
    else {
      if (h2-h1>0 && min2-min1<0)
      {
        ht = h2-h1-1;
        mint = 60-(min1-min2);
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ht, mint);
      }
      else {
        if (h1==h2 && min2-min1>0)
        {
          mint = min2-min1;
          printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n", mint);
        }
        else {
          if (h1==h2 && min1==min2)
          {
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
          }
          else {
            if (h1==h2 && min2-min1<0)
            {
              mint = 60-(min1-min2);
              printf("O JOGO DUROU 23 HORA(S) E %d MINUTO(S)\n", mint);
            }
            else {
              if (h2-h1<0 && min2-min1>0)
              {
                ht = 24-(h1-h2);
                mint = min2-min1;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ht, mint);
              }
              else {
                if (h2-h1<0 && min1==min2)
                {
                  ht = 24-(h1-h2);
                  printf("O JOGO DUROU %d HORA(S) E 0 MINUTO(S)\n", ht);
                }
                else {
                  if (h2-h1<0 && min2-min1<0)
                  {
                    ht = 23-(h1-h2);
                    mint = 60-(min1-min2);
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", ht, mint);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  
  return 0;
}