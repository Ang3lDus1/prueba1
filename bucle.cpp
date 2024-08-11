#include <iostream>

int main() {
    int numero;
    int suma = 0;

    std::cout << "Ingrese una serie de números enteros. Para terminar, ingrese 0." << std::endl;

    do {
        std::cout << "Ingrese un número: ";
        std::cin >> numero;

        if (numero != 0) {
            suma += numero;
        }
    } while (numero != 0);

    std::cout << "La suma de los números ingresados es: " << suma << std::endl;

    return 0;
}
