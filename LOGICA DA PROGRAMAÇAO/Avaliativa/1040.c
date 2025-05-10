//Luiz Guilherme Lourenço Campos
//RA: 22502521
#include <stdio.h>

int main () 
{
    float n1, n2 ,n3, n4, media, nota_extra, nota_depois_exame;

    scanf("%f %f %f %f", &n1, &n2, &n3, &n4);

    media = (((n1 * 2) + (n2 * 3) + (n3 * 4) + (n4 * 1)) / (2 + 3 + 4 + 1));
    
    if (media >= 7)
    {
        printf("Media : %.1f\n", media);
        printf("Aluno aprovado");
    }
    else if (media < 5)
    {
        printf("Media : %.1f\n", media);
        printf("Aluno reprovado");
    }
    else if (media >= 5 && media <= 6.9)
    {
        printf("Media : %.1f\n", media);
        printf("Aluno em exame.\n");
        
        printf("Digite a nota do exame: ");
        scanf("%f", &nota_extra);
        printf("Nota do exame : %.1f", nota_extra);
        
        nota_depois_exame = ((nota_extra + media) / 2);
        
        printf("\nAluno aprovado.\n");
        printf("Final de media : %.1f", nota_depois_exame);
    }
    
    return 0;
}