#include <stdio.h>

int main() {
    int Bispo, Torre, Rainha;     
    int Mover;     
    int totalMovimentos = 1;

    printf("Digite quantas casas vai andar: ");
    scanf("%d", &Bispo);

    for (int i = 1; i <= totalMovimentos; i++) {
        int valido = 0;
        while (!valido) {
            printf("\nMovimento do Bispo \n");
            printf("Escolha uma direção para mover:\n");
            printf("1 - Diagonal Cima Esquerda\n");
            printf("2 - Diagonal Cima Direita\n");
            printf("3 - Diagonal Baixo Esquerda\n");
            printf("4 - Diagonal Baixo Direita\n");
            printf("Digite sua escolha: ");
            scanf("%d", &Mover);

            if (Mover == 1) {
                printf("Bispo moveu %d casas na diagonal cima esquerda.\n", Bispo);
                valido = 1;
            } else if (Mover == 2) {
                printf("Bispo moveu %d casas na diagonal cima direita.\n", Bispo);
                valido = 1;
            } else if (Mover == 3) {
                printf("Bispo moveu %d casas na diagonal baixo esquerda.\n", Bispo);
                valido = 1;
            } else if (Mover == 4) {
                printf("Bispo moveu %d casas na diagonal baixo direita.\n", Bispo);
                valido = 1;
            } else {
                printf("Movimento inválido! Tente novamente.\n");
            }
        }
    }

    return 0;
}
