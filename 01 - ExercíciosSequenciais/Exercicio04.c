#include <stdio.h>

int main(){
    float f, c;

    printf("Digite a temperatura em Fahrenheit: ");
    scanf("%f", &f);
    
    c = (5.0/9.0) * (f-32.0);

    printf("\n\n%.2f Fahrenheit equivale a %.2f graus Celsius.\n", f, c);

    return 0;
}