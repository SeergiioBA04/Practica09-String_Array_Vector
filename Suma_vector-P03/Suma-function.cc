/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  Sum_vector
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 28 2022
* @brief Calcula la suma de los valores del vectores introducido
*/

#include<iostream>
#include<vector>
#include"Suma-function.h"

/*
* @description Calcula la suma de los vectores introducidos
* @param {vector Vector} Declara el vector donde haremos la suma
* @return suma
*/
int ReduceSum(const std::vector<int> Vector) {
  int size = Vector.size();
  double suma{0};
  for (int i = size; i >= 0; --i) {
    suma += Vector[i];
  }
  return suma;
}
