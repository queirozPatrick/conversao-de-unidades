#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

// Funções placeholders para outros módulos
void conversoes_area() {
    printf("Função de Conversões de Área (a ser implementada por João)\n");
}

void conversoes_volume() {
    printf("Função de Conversões de Volume (a ser implementada por Ana)\n");
}

void conversoes_digitais() {
    printf("Função de Conversões Digitais (a ser implementada por Josimar)\n");
}

void calculo_materiais() {
    printf("Função de Cálculo de Materiais (a ser implementada por Alex)\n");
}

void conversoes_tempo() {
    printf("Função de Conversões de Tempo (a ser implementada por Andre)\n");
}

// Função que exibe o menu principal
void menu() {
    printf("\n========== Conversões para Profissionais ==========\n");
    printf("Escolha uma das opções abaixo:\n");
    printf("1. Conversões de Área\n");
    printf("2. Conversões de Volume\n");
    printf("3. Conversões de Comprimento\n");
    printf("4. Conversões Digitais\n");
    printf("5. Cálculo de Materiais\n");
    printf("6. Conversões de Tempo\n");
    printf("7. Sair\n");
    printf("===================================================\n");
}

// Função principal
int main() {
    system("chcp 65001>null");  // Para garantir a codificação UTF-8 no Windows
    int escolha;
    int validInput;

    do {
        menu();
        printf("Digite sua escolha (1-7): ");
        validInput = scanf("%d", &escolha);

        // Limpa o buffer de entrada
        while (getchar() != '\n');

        // Verifica se a entrada foi válida
        if (validInput != 1 || escolha < 1 || escolha > 7) {
            printf("Entrada inválida. Por favor, insira um número de 1 a 7.\n");
            continue;
        }

        // Processa a escolha do usuário
        switch (escolha) {
            case 1:
                conversoes_area();
                break;
            case 2:
                conversoes_volume();
                break;
            case 3:
                conversoes_comprimento();
                break;
            case 4:
                conversoes_digitais();
                break;
            case 5:
                calculo_materiais();
                break;
            case 6:
                conversoes_tempo();
                break;
            case 7:
                printf("Obrigado por usar o programa. Até logo!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 7);

    return 0;
}

// Função de Conversões de Comprimento (primeiro código enviado)
void conversoes_comprimento() {
    double value, converted_value;
    char from_unit[20], to_unit[20];

    printf("\n========== Conversões de Comprimento ==========\n");
    printf("Unidades disponíveis: metros (m), centímetros (cm), polegadas (in)\n");

    // Solicitar o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    if (scanf("%lf", &value) != 1) {
        printf("Erro: Valor inválido.\n");
        while (getchar() != '\n'); // Limpa o buffer
        return;
    }

    // Solicitar a unidade fornecida
    printf("Digite a unidade fornecida (m, cm, in): ");
    scanf("%s", from_unit);
    for (int i = 0; from_unit[i]; i++) from_unit[i] = tolower(from_unit[i]);

    // Solicitar a unidade desejada
    printf("Digite a unidade desejada (m, cm, in): ");
    scanf("%s", to_unit);
    for (int i = 0; to_unit[i]; i++) to_unit[i] = tolower(to_unit[i]);

    // Validar unidades
    if ((strcmp(from_unit, "m") != 0 && strcmp(from_unit, "cm") != 0 && strcmp(from_unit, "in") != 0) ||
        (strcmp(to_unit, "m") != 0 && strcmp(to_unit, "cm") != 0 && strcmp(to_unit, "in") != 0)) {
        printf("Erro: Unidades inválidas. Use m, cm ou in.\n");
        return;
    }

    // Processar conversão
    if (strcmp(from_unit, "m") == 0 && strcmp(to_unit, "cm") == 0) {
        converted_value = value * 100.0;
    } else if (strcmp(from_unit, "m") == 0 && strcmp(to_unit, "in") == 0) {
        converted_value = value * 39.3701;
    } else if (strcmp(from_unit, "cm") == 0 && strcmp(to_unit, "m") == 0) {
        converted_value = value / 100.0;
    } else if (strcmp(from_unit, "cm") == 0 && strcmp(to_unit, "in") == 0) {
        converted_value = (value / 100.0) * 39.3701;
    } else if (strcmp(from_unit, "in") == 0 && strcmp(to_unit, "m") == 0) {
        converted_value = value / 39.3701;
    } else if (strcmp(from_unit, "in") == 0 && strcmp(to_unit, "cm") == 0) {
        converted_value = (value / 39.3701) * 100.0;
    } else if (strcmp(from_unit, to_unit) == 0) {
        converted_value = value;
        printf("A unidade fornecida e a desejada são as mesmas. Nenhuma conversão necessária.\n");
    } else {
        printf("Erro inesperado durante a conversão.\n");
        return;
    }

    // Exibir o resultado
    printf("%.2f %s são %.2f %s.\n", value, from_unit, converted_value, to_unit);
}
