#include <stdio.h>

int main () {
    float X;

    scanf("%f", &X);

    if( X > 0 && X < 25)
    {
        printf("Intervalo [0,25]");
    }
    else if ( X > 25 && X < 50)
    {
        printf("Intervalo (25,50]");
    }
    else if ( X > 50 && X < 75)
    {
        printf("Intervalo (50,75]");
    }
    else if ( X > 75 && X < 100)
    {
        printf("Intervalo (75,100]");
    }
    else 
    {
        printf("Fora de Intervalo");
    }
    
    return 0;
}