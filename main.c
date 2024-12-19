/*Esse código se tornará uma biblioteca a ser adicionada no programa principal*/

#include <stdio.h>
#include <stdlib.h>


// Funções para chamar cada módulo a ser implementado.

void conversoes_area(){
    printf("A ser implementado por João");
};

void conversoes_volume(){
    printf("A ser implementado por Ana");
};

void conversoes_comprimento(){
    printf("A ser implementado por Garcia");
}

void conversoes_digitais(){
    printf("A ser implementado por Josimar");    
}

// Função que vai exibir o menu principal
void menu() { 
    printf("========== Conversão para Profissionais da Área de Engenharia ==========\n"); 
    printf("Escolha uma das opções abaixo: \n");
    printf("1. Conversões de Área\n"); 
    printf("2. Conversões de Volume\n"); 
    printf("3. Conversões de Comprimento\n"); 
    printf("4. Conversões Digitais\n"); 
    printf("5. Cálculo de Materiais\n"); 
    printf("6. Conversões de Tempo\n"); 
    printf("7. Sair\n"); 
    printf("================ fim do menu ======================\n"); 
} 

int main() {

    system("chcp 65001>null");
    int escolha;
    int validInput;

        do{
             menu();  
             printf("Digite sua escolha (1-7): "); validInput = scanf("%d", &escolha);  
        

            printf("Entrada inválida. Por favor, insira um número de 1 a 7.\n"); 
            getchar();

            
        
        }while(validInput != 1 || escolha < 1 || escolha > 7);
       

        // Processa a escolha do usuário
        switch (escolha) {
            case 1:
                //conversoes_area();
                break;
            case 2:
                //conversoes_volume();
                break;
            case 3:
                //conversoes_comprimento();
                break;
            case 4:
                //conversoes_digitais();
                break;
            case 5:
                //calculo_materiais();
                break;
            case 6:
                //conversoes_tempo();
                break;
            case 7:
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
   

    return 0;
}
