#include <stdio.h>

int main() {
    int distancia, tempo;
    
    printf("Digite a distancia em km :");
    scanf("%d", &distancia);
    
    tempo = distancia * 2;
    
    printf("%d minutos", tempo);

    return 0;
}
