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

/*
* @description Calcula el tamaño del vector
* @param size tamaño del vector
* return vector
*/
std::vector<int> GenerateVector(const int size) {
  std::vector<int> vector(size);
  int entrada{0};
  for (int i = 0; i < size; i++) {
    std::cin >> entrada;
    vector[i] = entrada;
  }
  return vector;
}

/*
* @description Calcula la concanetación del vector introducido
* @param vector1, vector2, size1, size2, Declarar los vectores
* @return vectorfinal
*/
std::vector<int> UnirVectores(std::vector<int> vector1, std::vector<int>
vector2, int size1, int size2) {
  std::vector<int> vectorfinal(size1 + size2);
  for (int i = 0; i < size1 + size2; i++) {
    vectorfinal[i] = vector1[i];
    if (i >= size1) {
      vectorfinal[i] = vector2[i - size1];
    }
  }
  return vectorfinal;
}
