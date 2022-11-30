/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file Numeros_Aleatorios_vectores.cc
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 28 2022
* @brief Encuentra valores aleatorios entre un rango de vectores
*/

#include<iostream>
#include"tools.h"

/*
 *@description Indica que hace el programa
 */
void PrintProgramPurpose() {
  std::cout << "Encuentra valores aleatorios entre un rango de vectores" << std::endl;
}

/*
* @param {arc} {argv[]} {kCorrectNumber}
* @return {false} {true}
*/
bool CheckCorrectParameters(const int argc, char *argv[], const int kCorrectNumber) {
 if (argc != kCorrectNumber) {
    std::cout << "This program has been executed with a wrong number of parameters" << std::endl << std::endl;
    std::cout << "Tienes que introducir un numero entero, vuelve a intentarlo." << std::endl;
    return false;
  }
  return true;
}

