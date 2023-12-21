#include <stdio.h>

int main(){

int a = 5;
int b = 10;

printf("Valor de a: %d \nValor de b: %d \n", a, b);

int temp = a;
a = b;
b = temp;

printf("Troca valores\n");
printf("Valor de a: %d \nValor de b: %d \n", a, b);

return 0;
}