#include <stdio.h>
int main() {
    int horaI, HoraF, duracao;

    scanf("%d %d", &horaI, &HoraF);

    if(HoraF < horaI)
    {
        HoraF += 24;
    }

    duracao = HoraF - horaI;

    if(duracao == 0) 
    {
        printf("O JOGO DUROU 24 HORA(S)");
    }
    else
    {
        printf("O JOGO DUROU %d HORA(S)", duracao);
    }
        
    return 0;
}


