#include <iostream>

enum Estacion {
    PRIMAVERA = 1,
    VERANO,
    OTONIO,
    INVIERNO
};

int main() {
    int numero;
    std::cout << "Introduce un numero del 1 al 4: ";
    std::cin >> numero;

    switch (numero) {
        case PRIMAVERA:
            std::cout << "La estacion es Primavera." << std::endl;
            break;
        case VERANO:
            std::cout << "La estacion es Verano." << std::endl;
            break;
        case OTONIO:
            std::cout << "La estacion es Otonio." << std::endl;
            break;
        case INVIERNO:
            std::cout << "La estacion es Invierno." << std::endl;
            break;
        default:
            std::cout << "Numero invalido. Por favor, introduce un numero del 1 al 4." << std::endl;
            break;
    }

    return 0;
}

