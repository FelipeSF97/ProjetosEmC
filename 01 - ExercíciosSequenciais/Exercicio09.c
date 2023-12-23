#include <stdio.h>

int main(){
    int notas110, notas50, notas10;
    int valorTotal, valor;

    printf("Digite o valor a ser sacado: ");
    scanf("%d", &valor);

    valorTotal = valor;

    notas110 = valor/110;
    valor %= 110;

    notas50 = valor/50;
    valor %= 50;

    notas10 = valor/10;

    printf("Foram sacados %d reais: %d notas de 110, %d notas de 50, %d notas de 10", 
    valorTotal, notas110, notas50, notas10);

    return 0;
}
