// Luiz Guilherme Lourenço Campos
#include <stdio.h>

int main() {

    char nome[10];
    double salario_fixo, total_vendas_mes;

    scanf("%10s %lf %lf", &nome, &salario_fixo, &total_vendas_mes);

    double resultado = salario_fixo + (total_vendas_mes * 0.15);

    printf("TOTAL = R$ %.2lf", resultado);
    
    return 0; 
}
