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

    int segundosRestantes = 86400 - segundos;

    int horasRestantes = segundosRestantes / 3600;
    int minutosRestantes = (segundosRestantes % 3600) / 60;
    int segundosRestantesFinal = segundosRestantes % 60;

    printf("\nO horário é: %.2d:%.2d:%.2d\nSe passaram %d segundos desde o iniício do dia.\n", 
    hora, minutosOriginais, segundosOriginais, segundos);
    printf("Restam %d segundos para terminar o dia\n", segundosRestantes);
    printf("Restam %.2d:%.2d:%.2d para terminar o dia.", horasRestantes, minutosRestantes, segundosRestantesFinal);

    return 0;
}