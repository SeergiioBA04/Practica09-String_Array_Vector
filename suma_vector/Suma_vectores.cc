/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  Sum_vector
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 28 2022
* @brief Calcula la suma de los vectores introducidos
*/

#include<iostream>
#include<vector>
#include"Suma-function.h"
#include"tools.h"

/*
* @desription Funcion main que desencadena todas las demas funciones
* @param argc, *argv[] Linea de comando
*
*/
int main(int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
 
  }
  std::cout << "Todo Correcto" << std::endl;
  int size = std::__cxx11::stol(argv[1]);
  int i;
  std::cin >> size;
  std::vector<int> V(size);
  for (i = 0; i < size; ++i) {
    std::cin >> V[i];
  }
  std::cout << ReduceSum(V) << std::endl;
}
