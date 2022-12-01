/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file Max_Min_Promedio.cc
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Dec 1 2022
* @brief Write a program that reads a sequence of natural numbers and, for e
ach one, tells if it is a prime number or not. Remember that a natural number is prime if and only if it is greater than 1 and it does not have any positive divisor other than 1 and itself.
*/

#include<iostream>

/*
* @description Calcula si el numero introducido es un numero primo o no.
* @param numero_introducido : numero introducido por el usuario
* @returns {false}, {true}
*/
bool EsPrimo(const int numero_introducido) {
  for (int i = 2; i * i <= numero_introducido; i++) {
    if (numero_introducido % i == 0) {
      return false;
    }
  }
  if (numero_introducido == 0 || numero_introducido == 1) {
    return false;
  }
  return true;
}

/*
* @description Funcion main
*/
int main() {
  int numero_introducido;
  std::cin >> numero_introducido;
  int repeticiones;
  for (int i = 0; i < numero_introducido; i++) {
    if (std::cin >> repeticiones) {
      if (EsPrimo(repeticiones)) {
        std::cout << repeticiones << " is prime" << std::endl;
      } 
      else {
        std::cout << repeticiones << " is not prime" << std::endl;
      }
    } 
    else {
      std::cout << "0 is not prime" << std::endl;
    }
  } 
  return 0;
}
