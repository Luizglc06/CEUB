#include <stdio.h>
int main () {
    double valor, imposto = 0.0;

    scanf("%lf", &valor);

    if (valor >= 0 && valor <=2000)
    {
        printf("Isento");
    }
    else if(valor >= 2000.1 && valor <= 3000)
    {
        imposto = (valor - 2000.00) * 0.08;
        printf("R$ %.2lf\n", imposto);
    }
    else if(valor >= 3000.1 && valor <= 4500)
    {
        imposto = (1000.00 * 0.08) + (valor - 3000.00) * 0.18;
        printf("R$ %.2lf\n", imposto);
    }
    else if(valor > 4500)
    {
        imposto = (1000.00 * 0.08) + (1500.00 * 0.18) + (valor - 4500.00) * 0.28;
        printf("R$ %.2lf\n", imposto);
    }
    else
    {
        printf("ERROR : 404\n");
    }
}