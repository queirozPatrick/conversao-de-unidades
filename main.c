#include <stdio.h>
#include <stdlib.h>

// Funções para chamar cada módulo a ser implementado

void conversoes_area(){
    // A ser implementado por João
};

void conversoes_volume(){
    // A ser implementado por Ana
};

void conversoes_comprimento(){
    // A ser implementado por Juan
}

void conversoes_digitais(){
    // A ser implementado por Josimar    
}

void calculo_materiais(){
    // A ser implementado por Alex
};

void conversoes_tempo(){
    // A ser implementado por Andre
}

// Função que vai exibir o menu principal
void menu() {
    printf("========== Conversões para Profissionais ==========\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("1. Conversões de Área\n");
    printf("2. Conversões de Volume\n");
    printf("3. Conversões de Comprimento\n");
    printf("4. Conversões Digitais\n");
    printf("5. Cálculo de Materiais\n");
    printf("6. Conversões de Tempo\n");
    printf("7. Sair\n");
    printf("================ fim do menu ================\n");
}

int main() {
    system("chcp 65001>null");  // Para garantir a codificação UTF-8 no Windows
    int escolha;
    int validInput;

    do{
        menu();
        printf("Digite sua escolha (1-7): ");
        validInput = scanf("%d", &escolha);

        // Limpa o buffer de entrada
        while (getchar() != '\n');

        if (validInput != 1 || escolha < 1 || escolha > 7) {
            printf("Entrada inválida. Por favor, insira um número de 1 a 7.\n");
            continue;
        }

        // Processa a escolha do usuário
        switch (escolha) {
            case 1:
                //conversoes_area();
                printf("A ser implementado por João\n");
                break;
            case 2:
                //conversoes_volume();
                printf("A ser implementado por Ana\n");
                break;
            case 3:
                //conversoes_comprimento();
                printf("A ser implementado por Garcia\n");
                break;
            case 4:
                //conversoes_digitais();
                printf("A ser implementado por Josimar\n");
                break;
            case 5:
                //calculo_materiais();
                printf("A ser implementado por Alex\n");
                break;
            case 6:
                //conversoes_tempo();
                printf("A ser implementado por Andre\n");
                break;
            case 7:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 7);

    return 0;
}
