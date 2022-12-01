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

/*
* @description Calcula el minimo de vectores
* @param vector V : vector donde calcularemos el minimo.
*/
void CalcularMinimo(std::vector<int> Vector) {
  auto res = minmax_element(Vector.begin(), Vector.end());
  int minimo = *res.first;

  std::cout << "Minimo: " << minimo << std::endl;
}

/*
* @description Calcula el maximo de vectores
* @param vector Vector : vector donde calcularemos el maximo.
*/
void CalcularMaximo(std::vector<int> Vector) {
  auto res = minmax_element(Vector.begin(), Vector.end());
  int maximo = *res.second;

  std::cout << "Maximo: " << maximo << std::endl;
}

/*
* @description Calcula el promedio de vectores
* @param tamanio : tamaño del vector, vector Vector : vector donde calcularemos el promedio.
*/
void CalcularPromedio(int tamanio, std::vector<int> Vector) {
  double suma;
  for (int i = tamanio; i > 0; --i) {
    suma += Vector[i];
  }
  std::cout << "Promedio: " << suma / tamanio << std::endl;
}
