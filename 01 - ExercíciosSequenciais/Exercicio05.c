#include <stdio.h>

int main(){
    float larguraTerreno, comprimentoTerreno, areaTerreno;
    float larguraCasa, comprimentoCasa, areaCasa;
    float areaLivre, porcentagemLivre;

    printf("Digite a largura do terreno: ");
    scanf("%f", &larguraTerreno);
    printf("Digite o comprimento do terreno: ");
    scanf("%f", &comprimentoTerreno);
    printf("Digite a largura da casa: ");
    scanf("%f", &larguraCasa);
    printf("Digite o comprimento da casa: ");
    scanf("%f", &comprimentoCasa);

    areaTerreno = comprimentoTerreno * larguraTerreno;
    areaCasa = comprimentoCasa * larguraCasa;

    areaLivre = areaTerreno - areaCasa;

    porcentagemLivre = (areaLivre/areaTerreno) * 100;

    printf("\nA área livre do terreno é de %.2f metros quadrados e corresponde a %.2f porcento de área livre", areaLivre, porcentagemLivre);

    return 0;
}