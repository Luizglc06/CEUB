//Luiz Guilherme Lourenço Campos
//RA: 22502521
#include <stdio.h>

int main () 
{
    int A, B;

    scanf("%d %d", &A, &B);

    if(B % A > 0)
    {
        printf("NAO SAO MULTIPLOS");
    }
    else
    {
        printf("SAO MULTIPLOS");
    }
    return 0;
}