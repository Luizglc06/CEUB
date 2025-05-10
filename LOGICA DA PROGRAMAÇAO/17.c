#include <stdio.h>

int main () {
    float X, Y, result;
    
    scanf("%f %f", &X, &Y);

    if(0 == X && Y == 0)
    {
        printf("Origem");
    }
    else if (X > 0 && Y > 0)
    {
        printf("Q1");
    }
    else if (X < 0 && Y > 0)
    {
        printf("Q2");
    }
    else if (X < 0 && Y < 0)
    {
        printf("Q3");
    }
    else if (X > 0 && Y < 0)
    {
        printf("Q4");
    }
}