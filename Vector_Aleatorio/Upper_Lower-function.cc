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
* @description Calcula valores aleatorios entre un rango de vectores
* @param size : tamaño del vector, lower, upper : vectores donde encontramos los parametros aleatorios
* @return V
*/
std::vector<double> GenerateVector(const int size, const double lower, const double upper) {
  int min = (int) lower, max = (int)upper, i;
  double num;
  std::vector<double> V(size);
  srand(time(NULL));

  for (i = size; i > 0; --i) {
    num = min + rand() % (max - min);
    V.push_back (num);
  }
  return V;
}

