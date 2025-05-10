//Luiz Guilherme Lourenço Campos 
//RA: 22502521

#include <stdio.h>

int main() {
    double N;
    
    scanf("%lf", &N);
    
    int quantidade;
    
    printf("NOTAS:\n");
    
    quantidade = (int)(N / 100);
    printf("%d nota(s) de R$ 100.00\n", quantidade);
    N -= quantidade * 100;
    
    quantidade = (int)(N / 50);
    printf("%d nota(s) de R$ 50.00\n", quantidade);
    N -= quantidade * 50;
    
    quantidade = (int)(N / 20);
    printf("%d nota(s) de R$ 20.00\n", quantidade);
    N -= quantidade * 20;
    
    quantidade = (int)(N / 10);
    printf("%d nota(s) de R$ 10.00\n", quantidade);
    N -= quantidade * 10;
    
    quantidade = (int)(N / 5);
    printf("%d nota(s) de R$ 5.00\n", quantidade);
    N -= quantidade * 5;
    
    quantidade = (int)(N / 2);
    printf("%d nota(s) de R$ 2.00\n", quantidade);
    N -= quantidade * 2;
    
    
    printf("MOEDAS:\n");

    quantidade = (int)(N / 1);
    printf("%d moeda(s) de R$ 1.00\n", quantidade);
    N -= quantidade * 1;
    
    quantidade = (int)(N / 0.50);
    printf("%d moeda(s) de R$ 0.50\n", quantidade);
    N -= quantidade * 0.50;
    
    quantidade = (int)(N / 0.25);
    printf("%d moeda(s) de R$ 0.25\n", quantidade);
    N -= quantidade * 0.25;
    
    quantidade = (int)(N / 0.10);
    printf("%d moeda(s) de R$ 0.10\n", quantidade);
    N -= quantidade * 0.10;
    
    quantidade = (int)(N / 0.05);
    printf("%d moeda(s) de R$ 0.05\n", quantidade);
    N -= quantidade * 0.05;
    
    quantidade = (int)(N / 0.01);
    printf("%d moeda(s) de R$ 0.01\n", quantidade);
    N -= quantidade * 0.01;
    
    return 0;
}
