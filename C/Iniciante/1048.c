#include <stdio.h>
 
int main() {
    
    float r, p, sal, ns;
    scanf("%f", &sal);

    if(sal>=0 && sal<=400.00)
    {
        p=15;
        r=sal*p/100;
        ns=sal+r;
        printf("Novo salario: %.2f\n", ns);
        printf("Reajuste ganho: %.2f\n", r);
        printf("Em percentual: %.0f %%\n", p);
    }
    else {
        if(sal>=400.01 && sal<=800.00)
        {
            p=12;
            r=sal*p/100;
            ns=sal+r;
            printf("Novo salario: %.2f\n", ns);
            printf("Reajuste ganho: %.2f\n", r);
            printf("Em percentual: %.0f %%\n", p);
        }
        else {
            if(sal>=800.01 && sal<=1200.00)
            {
                p=10;
                r=sal*p/100;
                ns=sal+r;
                printf("Novo salario: %.2f\n", ns);
                printf("Reajuste ganho: %.2f\n", r);
                printf("Em percentual: %.0f %%\n", p);
            }
            else {
                if(sal>=1200.01 && sal<=2000.00)
                {
                    p=7;
                    r=sal*p/100;
                    ns=sal+r;
                    printf("Novo salario: %.2f\n", ns);
                    printf("Reajuste ganho: %.2f\n", r);
                    printf("Em percentual: %.0f %%\n", p);
                }
                else {
                    if(sal>2000.00)
                    {
                        p=4;
                        r=sal*p/100;
                        ns=sal+r;
                        printf("Novo salario: %.2f\n", ns);
                        printf("Reajuste ganho: %.2f\n", r);
                        printf("Em percentual: %.0f %%\n", p);
                    }
                }
            }
        }
    }
    return 0;
}