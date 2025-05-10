#include <stdio.h>

int main() {
    float A, B, C;
    double areaT, areaC, areaTRA, areaQ, areaR;
    
    scanf("%f %f %f", &A, &B, &C);

    //a) base*altura
    areaT = A * C / 2;
    //b) area circulo
    areaC = (3.14159 * C * C);
    //c) area trapezio base altura
    areaTRA = (A + B) * (C) / 2;
    //d) area quadrado
    areaQ = B * B;
    //e) area retangulo 
    areaR = A * B;

    printf("TRIANGULO: %.3f\n", areaT);
    printf("CIRCULO: %.3f\n", areaC);
    printf("TRAPEZIO: %.3f\n", areaTRA);
    printf("QUADRADO: %.3f\n", areaQ);
    printf("RETANGULO : %.3f\n", areaR);

    return 0;
}