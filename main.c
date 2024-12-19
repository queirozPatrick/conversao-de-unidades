#include <stdio.h>
#include <stdlib.h>

int main(){
    converteArea();
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
