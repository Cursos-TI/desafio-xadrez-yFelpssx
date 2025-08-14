#include <stdio.h>

int main() {
    int Bispo, Torre, Rainha;     
    int Mover;     
    int totalMovimentos = 1;

//MOVIMENTO DO BISPO.
    do {
    printf("Digite quantas casas para o BISPO mover (Max 6): ");
    scanf("%d", &Bispo);
 if (Bispo < 1 || Bispo > 6) {
        printf("Movimento inválido! Tente novamente.\n");
    }    
}while (Bispo < 1 || Bispo > 6);    


//DIREÇÃO PARA MOVER
    for (int i = 1; i <= totalMovimentos; i++) {
        int valido = 0;
        while (!valido) {
            printf("\nEscolha uma direção para mover:\n");
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

//APENAS PARA SEPARAR.
printf("\n");


//MOVIMENTO DA RAINHA.
do {
    printf("Digite quantas casas para a RAINHA mover (Max 8): ");
    scanf("%d", &Rainha);
 if (Rainha < 1 || Rainha > 8) {
        printf("Movimento inválido! Tente novamente.\n");
    }    
}while (Rainha < 1 || Rainha > 8);


//DIREÇÃO PARA MOVER.
    for (int i = 1; i <= totalMovimentos; i++) {
    int valido = 0;
    while (!valido) {
            printf("\nEscolha uma direção para mover:\n");
            printf("1 - Diagonal Cima Esquerda\n");
            printf("2 - Diagonal Cima Direita\n");
            printf("3 - Diagonal Baixo Esquerda\n");
            printf("4 - Diagonal Baixo Direita\n");
            printf("5 - Baixo\n");
            printf("6 - Cima\n");
            printf("7 - Esquerda\n");
            printf("8 - Direita\n");
            printf("Digite sua escolha: ");
            scanf("%d", &Mover);

     if (Mover == 1) {
            printf("Rainha moveu %d casas para Diagonal Cima Esquerda\n", Rainha);
            valido = 1;
        }
        else if (Mover == 2) {
            printf("Rainha moveu %d casas para Diagonal Cima Direita\n", Rainha);
            valido = 1;
        }
        else if (Mover == 3) {
            printf("Rainha moveu %d casas para Diagonal Baixo Esquerda\n", Rainha);
            valido = 1;
        }
        else if (Mover == 4) {
            printf("Rainha moveu %d casas para Diagonal Baixo Direita\n", Rainha);
            valido = 1;
        }
        else if (Mover == 5) {
            printf("Rainha moveu %d casas para Baixo\n", Rainha);
            valido = 1;
        }
        else if (Mover == 6) {
            printf("Rainha moveu %d casas para Cima\n", Rainha);
            valido = 1;
        }
        else if (Mover == 7) {
            printf("Rainha moveu %d casas para Esquerda\n", Rainha);
            valido = 1;
        }
        else if (Mover == 8) {
            printf("Rainha moveu %d casas para Direita\n", Rainha);
            valido = 1;
        }
        else {
            printf("Movimento inválido! Tente novamente.\n");
        }
    }
}

//APENAS PARA SEPARAR.
printf("\n");

//MOVIMENTO DA TORRE
do
{
    printf("Digite quantas casas para a TORRE mover (Max 7): ");
    scanf("%d", &Torre);

    if (Torre < 1 || Torre > 7){
        printf("Movimento inválido! Tente novamente.\n");
    }
}while (Torre < 1 || Torre > 7);


for (int i = 1; i <= totalMovimentos; i++){
int valido = 0;
while (!valido){
    printf("\nEscolha uma direção para mover:\n");
    printf("1 - Baixo\n");
    printf("2 - Cima\n");
    printf("3 - Esquerda\n");
    printf("4 - Direita\n");
    printf("Digite sua escolha: ");
    scanf("%d", &Mover);

 
if (Mover == 1){
    printf("Torre moveu %d para baixo \n", Torre);
    valido = 1;
}
else if (Mover == 2){
    printf("Torre moveu %d para Cima\n", Torre);
    valido = 1;
}
else if (Mover == 3){
    printf("Torre moveu %d para Esquerda\n", Torre);
    valido = 1;
}
else if (Mover == 4){
    printf("Torre moveu %d para Direita\n", Torre);
    valido = 1;
}
else{
    printf("Movimento inválido! Tente novamente.\n");
        }
    }
}
    return 0;
}
