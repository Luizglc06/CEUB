#include <stdio.h>
#include <math.h>

int main(){
    
    double raio = 5;
    double n = 3.14159;

    scanf("%lf", &raio);
    double area = n * pow (raio, 2); //calcular raio

    printf("A = %lf", area);

    return 0;
}