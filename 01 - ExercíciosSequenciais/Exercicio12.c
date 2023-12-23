#include <stdio.h>

int main(){
    int hora, minutos, segundos, segundosAdicionais;
    
    printf("Digite o a hora: ");
    scanf("%d", &hora);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    printf("Digite o número de segundos a serem adicionados: ");
    scanf("%d", &segundosAdicionais);

    int segundosTotais = hora * 3600 + minutos * 60 + segundos;
    int segundosFuturos = segundosTotais + segundosAdicionais;
    int novaHora = segundosFuturos / 3600 % 24;
    int novosMinutos = (segundosFuturos % 3600) / 60;
    int novosSegundos = segundosFuturos % 60;

    printf("\nO horário atual é: %.2d:%.2d:%.2d\n", hora, minutos, segundos);
    printf("Depois de %d segundos, o novo horário será: %.2d:%.2d:%.2d\n", segundosAdicionais, novaHora, novosMinutos, novosSegundos);

    return 0;
}