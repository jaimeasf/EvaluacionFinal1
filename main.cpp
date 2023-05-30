#include <iostream>
#include <string>

// Función para calcular el factorial de un número
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Función para calcular el enésimo número de la secuencia de Fibonacci
unsigned long long fibonacci(int n) {
    if (n <= 1) {
        return n;
    }

    unsigned long long a = 0;
    unsigned long long b = 1;
    unsigned long long fib = 0;

    for (int i = 2; i <= n; ++i) {
        fib = a + b;
        a = b;
        b = fib;
    }

    return fib;
}

// Función para contar el número de vocales en una cadena de texto
int contarVocales(const std::string& texto) {
    int contador = 0;
    std::string vocales = "aeiouAEIOU";

    for (size_t i = 0; i < texto.length(); ++i) {
        if (vocales.find(texto[i]) != std::string::npos) {
            contador++;
        }
    }

    return contador;
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
    unsigned long long factResult = factorial(num);
    std::cout << "El factorial de " << num << " es: " << factResult << std::endl;

    // Calcular el número de Fibonacci y mostrar el resultado
    unsigned long long fibResult = fibonacci(num);
    std::cout << "El numero de Fibonacci en la posicion " << num << " es: " << fibResult << std::endl;

    // Solicitar al usuario que ingrese una cadena de texto
    std::cin.ignore();  // Ignorar el salto de línea anterior
    std::string texto;
    std::cout << "Ingrese una cadena de texto: ";
    std::getline(std::cin, texto);

    // Calcular y mostrar el número de vocales en la cadena
    int numVocales = contarVocales(texto);
    std::cout << "El numero de vocales en la cadena es: " << numVocales << std::endl;

    return 0;
}

