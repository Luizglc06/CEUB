//Luiz Guilherme Lourenço Campos 
//RA: 22502521

#include <stdio.h>

int main () {
    int N, segundos_duracao;

    scanf("%d", &segundos_duracao);
    
    int horas =  (segundos_duracao / 60 / 60) % 60;
    int minutos = (segundos_duracao / 60) % 60;
    int segundos = segundos_duracao % 60;

    printf("%d:%d:%d", horas, minutos, segundos);
    return 0;
}