//Luiz Guilherme Lourenço Campos
//RA: 22502521
#include <stdio.h>

int main () 
{
    float A , B, C, perimetro, trapezio;
    
    scanf("%f %f %f", &A, &B, &C);

    if (B + C > A)
    {
        perimetro = A + B + C;
        printf("Perimetro = %.1f", perimetro);
    }
    else
    {
        trapezio = (((A + B) * C) / 2);
        printf("Area = %.1f", trapezio);
    }
    return 0;
}