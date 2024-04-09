#include <stdio.h>

int xp;
char nome[50];

int main() {
    printf("Qual nome do Heroi?\n");
    scanf("%s", nome);
    printf("Qual XP atual?\n");
    scanf("%d", &xp);

    if (xp >= 10000) {
        printf("O player %s eh radiante\n", nome);
    } else if (xp >= 8000) {
        printf("O player %s eh imortal\n", nome);
    } else if (xp >= 7000) {
        printf("O player %s eh ascendente\n", nome);
    } else if (xp >= 6000) {
        printf("O player %s eh platina\n", nome);
    } else if (xp >= 5000) {
        printf("O player %s eh ouro\n", nome);
    } else if (xp >= 2000) {
        printf("O player %s eh prata\n", nome);
    } else if (xp >= 1000) {
        printf("O player %s eh bronze\n", nome);
    } else {printf("O player %s eh ferro\n", nome);}

}