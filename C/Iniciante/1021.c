 
int main() {
 
    int n100, n50, n20, n10, n5, n2, m1, m50, m25, m10, m5, m01, b; 
    double N; 

    scanf("%lf", &N); 
    b = N*100; 

    n100=b/10000; b%=10000; 
    n50=b/5000; b%=5000; 
    n20=b/2000; b%=2000; 
    n10=b/1000; b%=1000; 
    n5=b/500; b%=500; 
    n2=b/200; b%=200; 
    m1=b/100; b%=100; 
    m50=b/50; b%=50; 
    m25=b/25; b%=25; 
    m10=b/10; b%=10; 
    m5=b/5; b%=5; 
    m01=b; 

    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n", n100);
    printf("%d nota(s) de R$ 50.00\n", n50);
    printf("%d nota(s) de R$ 20.00\n", n20);
    printf("%d nota(s) de R$ 10.00\n", n10);
    printf("%d nota(s) de R$ 5.00\n", n5);
    printf("%d nota(s) de R$ 2.00\n", n2);

    printf("MOEDAS:\n"); 
    printf("%d moeda(s) de R$ 1.00\n", m1); 
    printf("%d moeda(s) de R$ 0.50\n", m50); 
    printf("%d moeda(s) de R$ 0.25\n", m25); 
    printf("%d moeda(s) de R$ 0.10\n", m10); 
    printf("%d moeda(s) de R$ 0.05\n", m5); 
    printf("%d moeda(s) de R$ 0.01\n", m01); 
    
    return 0; 
}