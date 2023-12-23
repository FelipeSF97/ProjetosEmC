#include <stdio.h>

int main(){
    int hora, minutos, segundos;
    
    printf("Digite o a hora: ");
    scanf("%d", &hora);
    printf("Digite os minutos: ");
    scanf("%d", &minutos);
    printf("Digite os segundos: ");
    scanf("%d", &segundos);

    int minutosOriginais = minutos;
    int segundosOriginais = segundos;

    minutos = minutosOriginais + (hora * 60);
    segundos = segundosOriginais + (minutos * 60);

    printf("\nO horário é: %.2d:%.2d:%.2d\nSe passaram %d segundos desde o iniício do dia.", hora, minutosOriginais, segundosOriginais, segundos);

    return 0;
}