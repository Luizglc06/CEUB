//Nome: Luiz Guilherme Lourenço Campos
#include <stdio.h>

int main() {
    double A, B, C, media;
    
    scanf("%lf %lf %lf\n", &A, &B, &C);

    media = (A * 2 + B * 3 + C * 5) / (2 + 3 + 5);

    
    printf("MEDIA = %.1lf", media);
    
    return 0; 
}
