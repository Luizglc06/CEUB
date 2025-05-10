#include <stdio.h>

int main() {

    int A, B, C ,D, produto;

    scanf("%d %d %d %d", &A, &B, &C, &D);

    produto = (A * B - C * D);

    printf("DIFERENCA = %d", produto);

    return 0;
}