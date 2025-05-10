#include <stdio.h>

int main () 
{
    int X, Y, Z;

    scanf("%d %d %d", &X, &Y, &Z);

    if (X > Y)
    {
        int temp = X;
        X = Y;
        Y = temp;
    }
    if (Y > Z)
    {
        int temp = Y;
        Y = Z;
        Z = temp;
    }
    if (X > Y)
    {
        int temp = X;
        X = Y;
        Y = temp;
    }

    printf("\n%d\n %d\n %d\n", X, Y, Z);
    
    return 0;
}