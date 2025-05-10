//Luiz Guilherme Lourenço Campos
//RA: 22502521
#include <stdio.h>
int main() {
    float salario;
    float calculoSalario, ValorReajuste, percentual, novoSalario;

    scanf("%f", &salario);

    if(salario >= 0 && salario <= 400)
    {
        percentual = 15; 
    }
    else if (salario <= 800)
    {
        percentual = 12;
    }
    else if (salario <= 1200)
    {
        percentual = 10;
    }
    else if (salario <= 2000)
    {
        percentual = 7;
    }
    else if(salario > 2000)
    {
        percentual = 4;
    }

    ValorReajuste = salario * percentual / 100;
    novoSalario = salario + ValorReajuste;
    
    
    
    printf("Novo salario: %.2f\n", novoSalario);
    printf("Reajuste ganho: %.2f\n", ValorReajuste);
    printf("Em percentual: %.0f %%\n", percentual);

    return 0;
}