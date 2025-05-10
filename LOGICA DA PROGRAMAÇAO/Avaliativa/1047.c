//Luiz Guilherme Lourenço Campos
//RA: 22502521
#include <stdio.h>
int main() {
    int horaInicial, minutoInicial, horaFinal, minutoFinal;

    scanf("%d %d %d %d", &horaInicial, &minutoInicial, &horaFinal, & minutoFinal);

    int totalInicial = horaInicial * 60 + minutoInicial;
    int totalFinal = horaFinal * 60 + minutoFinal;

    if(totalFinal < totalInicial)
    {
        totalFinal += 24 * 60;
    }

    int duracao = totalFinal - totalInicial;

    int duracaoHora = duracao / 60;
    int duracaoMinuto = duracao % 60;

    if(duracao == 0)
    {
        duracaoHora = 24;
    }
        
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", duracaoHora, duracaoMinuto);
    
    return 0;
}