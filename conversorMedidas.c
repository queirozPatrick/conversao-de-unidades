#include <stdio.h>
#include <string.h>

// Funcao para converter metros para centimetros
double convert_meters_to_cm(double meters) {
    return meters * 100.0;
}

// Funcao para converter metros para polegadas
double convert_meters_to_inches(double meters) {
    return meters * 39.3701;
}

// Funcao para converter centimetros para metros
double convert_cm_to_meters(double cm) {
    return cm / 100.0;
}

// Funcao para converter polegadas para metros
double convert_inches_to_meters(double inches) {
    return inches / 39.3701;
}

int main() {
    double value, converted_value;
    char from_unit[20], to_unit[20];

    printf("Bem-vindo ao conversor de medidas!\n");
    printf("Unidades disponiveis: metros (m), centimetros (cm), polegadas (in)\n");

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
        printf("A unidade fornecida e a desejada sao as mesmas. Nenhuma conversao necessaria.\n");
    } else {
        printf("Unidades invalidas ou nao suportadas.\n");
        return 1;
    }

    // Exibir o resultado
    printf("%.2f %s sao %.2f %s.\n", value, from_unit, converted_value, to_unit);

    return 0;
}
