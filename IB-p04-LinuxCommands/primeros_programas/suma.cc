/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file suma.cc
  * @author Ismael Ould Chalague
  * @date 17/10/2024
  * @brief suma de dos numeros enteros
  * @bug 
  * @see 
  */  

#include <iostream>

int main() {
    int num1, num2, sum;

    // ponemos dos numeros enteros
    std::cout << "Introduce el primer numero entero: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo numero entero: ";
    std::cin >> num2;

    // calculo de la suma
    sum = num1 + num2;

    // salida de la suma
    std::cout << "La suma de " << num1 << " y " << num2 << " es " << sum << "." << std::endl;

    return 0;
}

