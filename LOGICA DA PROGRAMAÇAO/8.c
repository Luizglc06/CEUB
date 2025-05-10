#include <stdio.h>

int main() {

    int n_funcionarios, horas;
    float valor_hora, salario;

    scanf("%d %d %f", &n_funcionarios, &horas, &valor_hora);

    salario = horas * valor_hora; 

    printf("\nNUMERO = %.2d\n", n_funcionarios);
    printf("SALARIO = U$ %.2f\n", salario);

    return 0;
}