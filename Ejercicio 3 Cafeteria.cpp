#include <iostream>

enum Bebida {
	Cafe,
	Te,
	Jugo
};

const double Precio_Cafe = 1.5;
const double Precio_Te = 1.0;
const double Precio_Jugo = 2.0;

int main (){
	int Seleccion;
	int Cantidad;
	double CostoTotal = 0.0;
	
	std::cout << "Bienvenidos a la Cafeteria MOYUTECO S.A\n";
	std::cout << "Selecione su bebida: \n";
	std::cout << "0- Cafe (Q." << Precio_Cafe << ")\n";
	std::cout << "1-Te (Q." << Precio_Te << ")\n";
	std::cout << "2-Jugo (Q." << Precio_Jugo << ")\n";
	std::cin >> Seleccion;
	
	std::cout << "Ingrese la cantidad que deseada comprar: ";
	std::cin >> Cantidad;
	
	switch (Seleccion){
		case Cafe: CostoTotal = Cantidad * Precio_Cafe; break;
		case Te: CostoTotal = Cantidad * Precio_Te; break;
		case Jugo: CostoTotal = Cantidad * Precio_Jugo; break;
		default: std::cout << "Seleccion Invalida.";
		return 1;
	}
	std::cout << "El total a pagar es: Q." << CostoTotal << ".0\n";
	return 0;
}
