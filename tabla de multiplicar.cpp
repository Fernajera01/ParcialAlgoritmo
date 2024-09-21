#include <iostream>

int main() {
    int numero;

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    for (int i = 1; i <= 10; ++i) {
        std::cout << numero << " x " << i << " = " << numero * i << std::endl;
         
		}
	
	return 0;
}
  
