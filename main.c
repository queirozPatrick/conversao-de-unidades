/*Esse código se tornará uma biblioteca a ser adicionada no programa principal*/

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
    float num = 0;
    int unidade = 0;
    printf("Unidade inicial:\n ");
    printf("Digite 1 para segundo, 2 para minuto, 3 para hora e 4 para dia:\n ");
    scanf("%d",&unidade);
    while (unidade<=0 && unidade > 4)
    {
        printf("valor inválido!\n");
        scanf("%d",&unidade);
    }
    printf("Digite o valor do número: \n");
    scanf("%f",&num);
    switch (unidade) // converte valor de num para segundos.
    {
    case 1:
        break;
    case 2:
        // Minutos
        num = 60*num;
        break;
    case 3:
        // horas
        num = 3600*num;
        break;
    case 4:
        // dias
        num = 86400*num;
        break;   
    default:
        break;
    }
    printf("Unidade final:\n ");
    printf("Digite 1 para segundo, 2 para minuto, 3 para hora e 4 para dia:\n ");
    scanf("%d",&unidade);
    while (unidade<=0 && unidade > 4)
    {
        printf("valor inválido!\n");
        scanf("%d",&unidade);
    }
    printf(" Resultado da conversão: \n");
    switch (unidade)
    {
    case 1:
        // Segundos
        printf("%.2f segundos.\n", num);
        break;
    case 2:
        // Minutos
        num = num/60;
        printf("%.2f minutos.\n", num);
        break;
    case 3:
        // horas
        num = num/3600;
        printf("%.2f horas.\n", num);
        break;
    case 4:
        // dias
        num = num/86400;
        printf("%.2f dias.\n", num);
        break;   
    default:
    printf(" Erro inesperado! \n");
        break;
    }
}

// Função que vai exibir o menu principal

void menu() {
    printf("========== Conversão para Profissionais ==========\n");

    // Código a ser implementado
    
    printf("================ fim do menu ======================\n");
}

// Função principal

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
                conversoes_tempo();
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
