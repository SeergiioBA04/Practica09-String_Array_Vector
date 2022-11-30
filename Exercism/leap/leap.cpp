/**
* Universidad de La Laguna
* Escuela Superior de Ingeniería y Tecnología
* Grado en Ingeniería Informática
* Informática Básica 2022-2023
*
* @file  Leap.cpp
* @author Sergio Borrell Alberto alu0101563015@ull.edu.es
* @date Nov 25 2022
* @brief Calcula si el año es bisiesto o no
*/

#include "leap.h"

namespace leap {
/*
* Esta funcion comprueba si el año es bisiesto o no
* @param year Año introducido
* @return true o false
*/
  bool is_leap_year(int year) {
    return (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0));
  }
}  // namespace leap
