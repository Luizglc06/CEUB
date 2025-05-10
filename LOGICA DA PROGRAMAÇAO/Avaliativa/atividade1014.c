#include <stdio.h>

int main() {
    int X;
    float combustivel_gasto, consumo_medio;

    scanf("%d %f", &X, &combustivel_gasto);

    consumo_medio = X / combustivel_gasto;

    printf("%.3f km/l\n", consumo_medio);

    return 0;
}