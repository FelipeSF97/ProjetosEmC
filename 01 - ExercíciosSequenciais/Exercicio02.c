#include <stdio.h>

int main(){
    int a = 5;
    float x = 11.31;
    printf("Com d: %d\n, a");
    printf("Com 7d: %7d\n, a");
    printf("Com 07d: %07d\n, a");
    printf("Com -7d: %-7d\n, a");
    printf("Com f: %f\n, a");
    printf("Com 7f: %7f\n, x");
    printf("Com .3f: %.3f\n, x");
    printf("Com 7.4f: %7.4f\n, x");
    printf("Com c: %c\n, a");
    printf("Com c: %c\n, x");

    return 0;
}