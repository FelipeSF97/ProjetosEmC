#include <stdio.h>
#include <math.h>

int main(){
    float raioTerreno, raioCasa;
    float areaTerreno, areaCasa;
    float areaLivre, porcentagemLivre;

    printf("Digite o raio do terreno: ");
    scanf("%f", &raioTerreno);
    printf("Digite o raio da casa: ");
    scanf("%f", &raioCasa);


    areaTerreno = M_PI * pow(raioTerreno, 2);

    areaCasa = M_PI * pow(raioCasa, 2);

    areaLivre = areaTerreno - areaCasa;

    porcentagemLivre = (areaLivre/areaTerreno) * 100;

    printf("\nA área livre do terreno é de %.2f metros quadrados e corresponde a %.2f porcento de área livre", areaLivre, porcentagemLivre);

    return 0;
}