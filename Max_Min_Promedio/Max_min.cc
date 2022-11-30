/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file Max_Min_Promedio.cc
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 28 2022
* @brief Maximo , Minimo y promedio de vectores
*/

#include<iostream>
#include<algorithm>
#include<vector>
#include"Max_min-function.h"
#include"tools.h"

/*
* @description Funcion main que desencadena las demas funciones
* @param argc, *argv[] Linea de comando
*/
int main(int argc, char *argv[]) {
  PrintProgramPurpose();
  if (!CheckCorrectParameters(argc, argv, 2)) {
    return 1;
  }
  std::cout << "Todo Correcto" << std::endl;
  int tamanio = std::__cxx11::stol(argv[1]);
  double suma;
  std::cin >> tamanio;
  std::vector<int> V(tamanio);
  for (int i = 0; i < tamanio; ++i) {
    std::cin >> V[i];
  }
  CalcularMinimo(V);
  CalcularMaximo(V);
  CalcularPromedio(tamanio, V);
}
