#include <iostream>
#include <string>

// Funci�n para calcular el factorial de un n�mero
unsigned long long factorial(int n) {
    unsigned long long fact = 1;
    for (int i = 1; i <= n; ++i) {
        fact *= i;
    }
    return fact;
}

// Funci�n para calcular el en�simo n�mero de la secuencia de Fibonacci
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

// Funci�n para contar el n�mero de vocales en una cadena de texto
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

    // Verificar si el n�mero es no negativo
    if (num < 0) {
        std::cout << "El numero debe ser no negativo." << std::endl;
        return 1;
    }

    // Calcular el factorial y mostrar el resultado
    unsigned long long factResult = factorial(num);
    std::cout << "El factorial de " << num << " es: " << factResult << std::endl;

    // Calcular el n�mero de Fibonacci y mostrar el resultado
    unsigned long long fibResult = fibonacci(num);
    std::cout << "El numero de Fibonacci en la posicion " << num << " es: " << fibResult << std::endl;

    // Solicitar al usuario que ingrese una cadena de texto
    std::cin.ignore();  // Ignorar el salto de l�nea anterior
    std::string texto;
    std::cout << "Ingrese una cadena de texto: ";
    std::getline(std::cin, texto);

    // Calcular y mostrar el n�mero de vocales en la cadena
    int numVocales = contarVocales(texto);
    std::cout << "El numero de vocales en la cadena es: " << numVocales << std::endl;

    return 0;
}

