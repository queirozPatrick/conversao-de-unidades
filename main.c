#include <stdio.h>
#include <stdlib.h>

// Funções para chamar cada módulo a ser implementado

void conversoes_area(){
  
    converteArea();

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


//void calculo_materiais(){

//};


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

                conversoes_area();
                // printf("A ser implementado por João\n");

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
                calculo_materiais();
                //printf("A ser implementado por Alex\n");
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


// cabeçalhos
void converteArea ();
float cm2_to_m2 (float valor);
float hectare_to_m2 (float valor);
float km2_to_m2(float valor);
float ft2_to_m2(float valor);
float pol2_to_m2(float valor);
#define m2_to_cm2 hectare_to_m2
#define m2_to_hectare cm2_to_m2
float m2_to_km2(float valor);
float m2_to_ft2(float valor);
float m2_to_pol2(float valor);

// corpo das funções
void converteArea (){
    float valor, valorFinal;
    int escolha1, escolha2;
    printf("Qual a unidade de área inicial? \n 1. cm² \n 2. m² \n 3. Hectare² \n 4. Km² \n 5. ft² (pés) \n 6. pol² (polegadas) \n");
    scanf("%d", &escolha1);
    printf("\nDigite o valor: ");
    scanf("%f", &valor);
    printf("Deseja converter para qual unidade de área? \n 1. cm² \n 2. m² \n 3. Hectare² \n 4. Km² \n 5. ft² (pés) \n 6. pol² (polegadas) \n");
    scanf("%d", &escolha2);
    if(escolha1 == escolha2){
        valorFinal = valor;
    } else{
        switch(escolha1){
            case 1:
                valor = cm2_to_m2(valor);
                break;
            case 3:
                valor = hectare_to_m2(valor);
                break;
            case 4:
                valor = km2_to_m2(valor);
                break;
            case 5:
                valor = ft2_to_m2(valor);
                break;
            case 6:
                valor = pol2_to_m2(valor);
                break;
            default:
                break;
        }
        switch(escolha2){
            case 1:
                valorFinal = m2_to_cm2(valor);
                break;
            case 3:
                valorFinal = m2_to_hectare(valor);
                break;
            case 4:
                valorFinal = m2_to_km2(valor);
                break;
            case 5:
                valorFinal = m2_to_ft2(valor);
                break;
            case 6:
                valorFinal = m2_to_pol2(valor);
                break;
            default:
                valorFinal = valor;
                break;
        }
    }
    printf("O valor convertido é %f \n", valorFinal);
}
float cm2_to_m2 (float valor){
    return valor / 1e4;
}
float hectare_to_m2 (float valor){
    return valor * 1e4;
}
float km2_to_m2(float valor) {
    return valor * 1e6; 
}
float m2_to_km2(float valor){
    return valor / 1e6;
}
float ft2_to_m2(float valor) {
    return valor / 10.7639; 
}
float m2_to_ft2(float valor){
    return valor * 10.7639;
}
float pol2_to_m2(float valor) {
    return valor / 1550.003;
}
float m2_to_pol2(float valor){
    return valor * 1550.003;
}

void calculate_concrete_volume() {
    float larguraPiso, comprimentoPiso, espessuraPiso, volumeConcreto;

    printf("Informe a largura do piso (em metros): ");
    scanf("%f", &larguraPiso);

    printf("Informe o comprimento do piso (em metros): ");
    scanf("%f", &comprimentoPiso);

    printf("Informe a espessura do piso (em metros): ");
    scanf("%f", &espessuraPiso);

    volumeConcreto = larguraPiso * comprimentoPiso * espessuraPiso;
    printf("\nSerá necessário %.2f m³ de concreto para o piso.\n\n", volumeConcreto);
}

float calcula_area(int quantidade){
    float largura, comprimento,areaTotal=0;


    for(int i = 0; i<quantidade; i++){
        printf("Informe a %dª largura (em metros): ",i+1);
        scanf("%f",&largura);
        
        printf("Informe o %dº comprimento (em metros): ",i+1);
        scanf("%f",&comprimento);
   
        areaTotal+=largura*comprimento;
        }
    

    return areaTotal;   

}

void calculate_blocks() {
    float alturaParede, comprimentoParede, areaParede, areaPorta = 0, areaJanela = 0;
    int quantidade;

    printf("Informe a altura da parede (em metros): ");
    scanf("%f", &alturaParede);

    printf("Informe o comprimento ou perímetro de parede (em metros): ");
    scanf("%f", &comprimentoParede);

    areaParede = alturaParede * comprimentoParede;

    printf("Quantas janelas há no projeto? ");
    scanf("%d", &quantidade);
    areaJanela = calcula_area(quantidade);

    printf("Quantas portas há no projeto? ");
    scanf("%d", &quantidade);
    areaPorta = calcula_area(quantidade);

    printf("\nSerá necessário aproximadamente %.2f m² de blocos.\n\n", areaParede - areaJanela - areaPorta);
}

void calculo_materiais() {
    int escolha;

    do {
        printf("Deseja calcular material pra qual objetivo?\n 1. Volume de concreto necessário para piso.\n 2. Quantidade de blocos.\n 3. Voltar para o menu princinpal.\n");
        scanf("%d", &escolha);

    if(escolha==3){
        break;
    }
    switch (escolha) {
        case 1:
            calculate_concrete_volume();
            break;
        case 2:
            calculate_blocks();
            break;
        case 3:
            menu();
            break;
        default:
           printf("Opção inválida.\n\n");
        }
    } while (escolha==1||escolha==2);

}