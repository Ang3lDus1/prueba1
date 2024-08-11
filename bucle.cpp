#include <iostream>

int main() {
    int numero;
    int suma = 0;

    std::cout << "Ingrese una serie de n�meros enteros. Para terminar, ingrese 0." << std::endl;

    do {
        std::cout << "Ingrese un n�mero: ";
        std::cin >> numero;

        if (numero != 0) {
            suma += numero;
        }
    } while (numero != 0);

    std::cout << "La suma de los n�meros ingresados es: " << suma << std::endl;

    return 0;
}
