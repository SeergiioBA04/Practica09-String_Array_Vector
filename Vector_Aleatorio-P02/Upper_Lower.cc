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

#include<cstdlib>
#include<iostream>
#include<time.h>
#include<vector>
#include"Upper_Lower-function.h"
#include"tools.h"

/*
* @description Function main y concatena todas las funciones
* @param argc, *argv[] Linea de comando
* @return 0
*/
int main(int argc, char *argv[]) {
  PrintProgramPurpose();
  std::vector<double> my_vector = GenerateVector(10, 5.0, 10.0);
  for (const auto &value : my_vector) {
    std::cout << "Component: " << value << std::endl;
  }
  return 0;
}
