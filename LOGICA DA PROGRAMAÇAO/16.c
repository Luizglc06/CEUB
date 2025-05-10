#include <stdio.h>

int main () {
    int X, Y, itens;
    float result;
    
    scanf("%d %d", &X, &Y);

    switch (itens)
    {
    case 1 :
        result = 4;
        break;
    
    case 2 : 
        result = 4.5;
        break;
    case 3 :
        result = 5;
        break;
    case 4 : 
        result = 2;
        break;
    case 5 : 
        result = 1.5;
        break;
    default:
        printf("deu ruim");
        break;
    }

    printf("Total : R$ %f", result * Y);
    
    result 0;
}