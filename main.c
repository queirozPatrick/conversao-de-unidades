#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

// Função para converter bits para bytes
double convert_bits_to_bytes(long long bits) {
    return bits / 8.0;
};

// Função para converter bytes para terabytes
double convert_bytes_to_terabytes(long long bytes) {
    return bytes / 1e12;
};

// Implementado por Josimar Souza
void conversoes_digitais() {

    long long bits, bytes;

   
    printf("Digite o número de bits: ");
    scanf("%lld", &bits);
    double bytes_result = convert_bits_to_bytes(bits);
    printf("%lld bits equivalem a %.2f bytes.\n", bits, bytes_result);

    // Exemplo: Converter bytes para terabytes
    printf("Digite o número de bytes: ");
    scanf("%lld", &bytes);
    double terabytes_result = convert_bytes_to_terabytes(bytes);
    printf("%lld bytes equivalem a %.12f terabytes.\n", bytes, terabytes_result);

};

// Implementado por Heitor Lemos
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
};

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
                break;
            case 2:
                //conversoes_volume();
                printf("A ser implementado por Ana\n");
                break;
            case 3:
                run_conversion_program();
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
                printf("Saindo do programa.\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (escolha != 7);

    return 0;
}

// Implementado por João Victor Paim
// cabeçalhos

void conversoes_area() {
    // Função simples como placeholder (exemplo):
    printf("Função de conversões de área ainda não implementada.\n");
}

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
};

// Implementado por André Dutra da Silva
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
};

// Implementado por Alex dos Santos
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

};

// Implementado por Juan Garcia
// Funcao para converter metros para centimetros

double convert_meters_to_cm(double meters);
double convert_meters_to_inches(double meters);
double convert_cm_to_meters(double cm);
double convert_inches_to_meters(double inches);

// Função principal encapsulada
void run_conversion_program() {
    double value, converted_value;
    char from_unit[20], to_unit[20];

    printf("Bem-vindo ao conversor de medidas!\n");
    printf("Unidades disponíveis: metros (m), centímetros (cm), polegadas (in)\n");

    // Solicitar o valor a ser convertido
    printf("Digite o valor a ser convertido: ");
    scanf("%lf", &value);

    // Solicitar a unidade fornecida
    printf("Digite a unidade fornecida (m, cm, in): ");
    scanf("%s", from_unit);

    // Solicitar a unidade desejada
    printf("Digite a unidade desejada (m, cm, in): ");
    scanf("%s", to_unit);

    // Converter de acordo com as unidades fornecidas
    if (strcmp(from_unit, "m") == 0 && strcmp(to_unit, "cm") == 0) {
        converted_value = convert_meters_to_cm(value);
    } else if (strcmp(from_unit, "m") == 0 && strcmp(to_unit, "in") == 0) {
        converted_value = convert_meters_to_inches(value);
    } else if (strcmp(from_unit, "cm") == 0 && strcmp(to_unit, "m") == 0) {
        converted_value = convert_cm_to_meters(value);
    } else if (strcmp(from_unit, "cm") == 0 && strcmp(to_unit, "in") == 0) {
        converted_value = convert_meters_to_inches(convert_cm_to_meters(value));
    } else if (strcmp(from_unit, "in") == 0 && strcmp(to_unit, "m") == 0) {
        converted_value = convert_inches_to_meters(value);
    } else if (strcmp(from_unit, "in") == 0 && strcmp(to_unit, "cm") == 0) {
        converted_value = convert_meters_to_cm(convert_inches_to_meters(value));
    } else if (strcmp(from_unit, to_unit) == 0) {
        converted_value = value;
        printf("A unidade fornecida e a desejada são as mesmas. Nenhuma conversão necessária.\n");
    } else {
        printf("Unidades inválidas ou não suportadas.\n");
        return;
    }

    // Exibir o resultado
    printf("%.2f %s são %.2f %s.\n", value, from_unit, converted_value, to_unit);
}

int main2() {
    // Chamar a função do programa principal
    run_conversion_program();
    return 0;
}

// Implementação das funções de conversão
double convert_meters_to_cm(double meters) {
    return meters * 100.0;
}

double convert_meters_to_inches(double meters) {
    return meters * 39.3701;
}

double convert_cm_to_meters(double cm) {
    return cm / 100.0;
}

double convert_inches_to_meters(double inches) {
    return inches / 39.3701;
};