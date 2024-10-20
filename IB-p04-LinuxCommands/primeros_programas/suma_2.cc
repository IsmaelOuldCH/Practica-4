/**
  * Universidad de La Laguna
  * Escuela Superior de Ingeniería y Tecnología
  * Grado en Ingeniería Informática
  * Informática Básica 2024-2025
  *
  * @file suma_2.cc
  * @author Ismael Ould Chalague
  * @date 17/10/2024
  * @brief suma de tres numeros enteros
  * @bug 
  * @see 
  */  

#include <iostream>

int main() {
    int num1, num2, num3, sum;

    // ponemos tres numeros enteros cualquiera
    std::cout << "Introduce el primer numero entero: ";
    std::cin >> num1;
    std::cout << "Introduce el segundo numero entero: ";
    std::cin >> num2;
    std::cout << "Introduce el tercer numero entero: ";
    std::cin >> num3;

    // calculo de la suma de los 3 numeros
    sum = num1 + num2 + num3;

    // salida de la suma
    std::cout << "La suma de " << num1 << ", " << num2 << " y " << num3 << " es " << sum << "." << std::endl;

    return 0;
}

