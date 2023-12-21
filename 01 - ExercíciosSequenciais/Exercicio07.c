#include <stdio.h>

int main(){
    int a, b, c;
    int impares = 0;
    int pares = 0;

    printf("Digite os valores: ");
    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    if(a % 2 != 0){ impares++; }
    else{ pares++; }
    if(b % 2 != 0){ impares++; }
    else{ pares++; }
    if(c % 2 != 0){ impares++; }
    else{ pares++; }

    printf("\nSão %d números ímpares e %d números pares.", impares, pares);

    return 0;
}