#include <iostream>

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
    
    
    // Calcular el número de Fibonacci y mostrar el resultado
    unsigned long long fibResult = fibonacci(num);
    std::cout << "El numero de Fibonacci en la posicion " << num << " es: " << fibResult << std::endl;


    return 0;
}

