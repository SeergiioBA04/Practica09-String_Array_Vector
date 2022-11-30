/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file 
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 28 2022
* @brief Programa que incluya una función que tome como parámetros dos vectores y devuelva como resultado un tercer vector que sea la "concatenación" de los dos vectores pasados 
*/

#include<iostream>
#include<vector>
#include"Generate_Vector-function.h"
#include"tools.h"

/*
* @description Funcion main que desencadena las demas funciones
* @param argc, *argv[] Linea de comando
*/
int main(int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 3)) {
    return 1;
 
  }
  std::cout << "Todo Correcto" << std::endl;
  int size1 = std::__cxx11::stol(argv[1]);
  int size2 = std::__cxx11::stol(argv[2]);
  std::cin >> size1;
  std::vector<int> vector1 = GenerateVector(size1);
  std::cin >> size2;
  std::vector<int> vector2 = GenerateVector(size2);
  std::vector<int> vectorfinal = UnirVectores(vector1, vector2, size1, size2);
  for (const auto& value : vectorfinal) {
    std::cout << value << " ";
  }
  std::cout << std::endl;
}
