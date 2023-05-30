#include <iostream>

// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

int main() {
    int num;
    std::cout << "Ingrese un numero entero no negativo: ";
    std::cin >> num;

    // Verificar si el número es no negativo
    if (num < 0) {
        std::cout << "El numero debe ser no negativo." << std::endl;
        return 1;
    }

    // Calcular el factorial y mostrar el resultado
    unsigned long long result = factorial(num);
    std::cout << "El factorial de " << num << " es: " << result << std::endl;

    return 0;
}

