/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file 
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 28 2022
* @brief Programa que incluya una función que tome como parámetros dos vectores y devuelva como resultado un tercer vector que sea la "concatenación" de los dos vectores pasados.
*/

#include<iostream>
#include"tools.h"

/*
 *@description Indica que hace el programa
 */
void PrintProgramPurpose() {
  std::cout << "Programa que incluya una función que tome como parámetros dos vectores y devuelva como resultado un tercer vector que sea la concatenación de los dos vectores pasados" << std::endl;
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

